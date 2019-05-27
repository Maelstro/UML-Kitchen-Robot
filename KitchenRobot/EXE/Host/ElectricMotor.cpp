/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: ElectricMotor
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\ElectricMotor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ElectricMotor.h"
//#[ ignore
#define KitchenRobot_ElectricMotor_ElectricMotor_SERIALIZE OM_NO_OP
//#]

//## package KitchenRobot

//## class ElectricMotor
ElectricMotor::ElectricMotor(IOxfActive* theActiveContext) : Mode(0) {
    NOTIFY_ACTIVE_CONSTRUCTOR(ElectricMotor, ElectricMotor(), 0, KitchenRobot_ElectricMotor_ElectricMotor_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
}

ElectricMotor::~ElectricMotor() {
    NOTIFY_DESTRUCTOR(~ElectricMotor, true);
}

int ElectricMotor::getMode() const {
    return Mode;
}

void ElectricMotor::setMode(int p_Mode) {
    Mode = p_Mode;
}

bool ElectricMotor::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void ElectricMotor::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_1_subState = OMNonState;
}

void ElectricMotor::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus ElectricMotor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            res = Off_handleEvent();
        }
        break;
        // State Stir
        case Stir:
        {
            res = Stir_handleEvent();
        }
        break;
        // State Mix
        case Mix:
        {
            res = Mix_handleEvent();
        }
        break;
        // State Blend
        case Blend:
        {
            res = Blend_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

void ElectricMotor::state_1_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_1");
    rootState_subState = state_1;
    NOTIFY_TRANSITION_STARTED("6");
    NOTIFY_STATE_ENTERED("ROOT.state_1.Mix");
    state_1_subState = Mix;
    rootState_active = Mix;
    NOTIFY_TRANSITION_TERMINATED("6");
}

IOxfReactive::TakeEventStatus ElectricMotor::state_1_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evMotorOff_KitchenRobot_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            switch (state_1_subState) {
                // State Stir
                case Stir:
                {
                    NOTIFY_STATE_EXITED("ROOT.state_1.Stir");
                }
                break;
                // State Mix
                case Mix:
                {
                    NOTIFY_STATE_EXITED("ROOT.state_1.Mix");
                }
                break;
                // State Blend
                case Blend:
                {
                    NOTIFY_STATE_EXITED("ROOT.state_1.Blend");
                }
                break;
                default:
                    break;
            }
            state_1_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.state_1");
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus ElectricMotor::Stir_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evBlend_KitchenRobot_id))
        {
            NOTIFY_TRANSITION_STARTED("12");
            NOTIFY_STATE_EXITED("ROOT.state_1.Stir");
            NOTIFY_STATE_ENTERED("ROOT.state_1.Blend");
            state_1_subState = Blend;
            rootState_active = Blend;
            NOTIFY_TRANSITION_TERMINATED("12");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evMix_KitchenRobot_id))
        {
            NOTIFY_TRANSITION_STARTED("8");
            NOTIFY_STATE_EXITED("ROOT.state_1.Stir");
            NOTIFY_STATE_ENTERED("ROOT.state_1.Mix");
            state_1_subState = Mix;
            rootState_active = Mix;
            NOTIFY_TRANSITION_TERMINATED("8");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_1_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus ElectricMotor::Mix_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evBlend_KitchenRobot_id))
        {
            NOTIFY_TRANSITION_STARTED("10");
            NOTIFY_STATE_EXITED("ROOT.state_1.Mix");
            NOTIFY_STATE_ENTERED("ROOT.state_1.Blend");
            state_1_subState = Blend;
            rootState_active = Blend;
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evStir_KitchenRobot_id))
        {
            NOTIFY_TRANSITION_STARTED("9");
            NOTIFY_STATE_EXITED("ROOT.state_1.Mix");
            NOTIFY_STATE_ENTERED("ROOT.state_1.Stir");
            state_1_subState = Stir;
            rootState_active = Stir;
            NOTIFY_TRANSITION_TERMINATED("9");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_1_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus ElectricMotor::Blend_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evMix_KitchenRobot_id))
        {
            NOTIFY_TRANSITION_STARTED("7");
            NOTIFY_STATE_EXITED("ROOT.state_1.Blend");
            NOTIFY_STATE_ENTERED("ROOT.state_1.Mix");
            state_1_subState = Mix;
            rootState_active = Mix;
            NOTIFY_TRANSITION_TERMINATED("7");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evStir_KitchenRobot_id))
        {
            NOTIFY_TRANSITION_STARTED("11");
            NOTIFY_STATE_EXITED("ROOT.state_1.Blend");
            NOTIFY_STATE_ENTERED("ROOT.state_1.Stir");
            state_1_subState = Stir;
            rootState_active = Stir;
            NOTIFY_TRANSITION_TERMINATED("11");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = state_1_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus ElectricMotor::OffTakeevMotorOn() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 2 
    if(Mode == 1)
        {
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_TRANSITION_STARTED("2");
            NOTIFY_STATE_EXITED("ROOT.Off");
            NOTIFY_STATE_ENTERED("ROOT.state_1");
            rootState_subState = state_1;
            NOTIFY_STATE_ENTERED("ROOT.state_1.Mix");
            state_1_subState = Mix;
            rootState_active = Mix;
            NOTIFY_TRANSITION_TERMINATED("2");
            NOTIFY_TRANSITION_TERMINATED("5");
            res = eventConsumed;
        }
    else
        {
            //## transition 3 
            if(Mode == 2)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.state_1");
                    rootState_subState = state_1;
                    NOTIFY_STATE_ENTERED("ROOT.state_1.Blend");
                    state_1_subState = Blend;
                    rootState_active = Blend;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 4 
                    if(Mode == 3)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_STATE_EXITED("ROOT.Off");
                            NOTIFY_STATE_ENTERED("ROOT.state_1");
                            rootState_subState = state_1;
                            NOTIFY_STATE_ENTERED("ROOT.state_1.Stir");
                            state_1_subState = Stir;
                            rootState_active = Stir;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
        }
    return res;
}

IOxfReactive::TakeEventStatus ElectricMotor::Off_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evMotorOn_KitchenRobot_id))
        {
            res = OffTakeevMotorOn();
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedElectricMotor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Mode", x2String(myReal->Mode));
}

void OMAnimatedElectricMotor::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case ElectricMotor::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case ElectricMotor::state_1:
        {
            state_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedElectricMotor::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1");
    switch (myReal->state_1_subState) {
        case ElectricMotor::Stir:
        {
            Stir_serializeStates(aomsState);
        }
        break;
        case ElectricMotor::Mix:
        {
            Mix_serializeStates(aomsState);
        }
        break;
        case ElectricMotor::Blend:
        {
            Blend_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedElectricMotor::Stir_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1.Stir");
}

void OMAnimatedElectricMotor::Mix_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1.Mix");
}

void OMAnimatedElectricMotor::Blend_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1.Blend");
}

void OMAnimatedElectricMotor::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(ElectricMotor, KitchenRobot, KitchenRobot, false, OMAnimatedElectricMotor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: EXE\Host\ElectricMotor.cpp
*********************************************************************/
