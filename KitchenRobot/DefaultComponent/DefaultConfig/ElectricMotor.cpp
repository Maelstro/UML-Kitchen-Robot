/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ElectricMotor
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: DefaultComponent\DefaultConfig\ElectricMotor.cpp
*********************************************************************/

//## auto_generated
#include "ElectricMotor.h"
//## package KitchenRobot

//## class ElectricMotor
ElectricMotor::ElectricMotor(IOxfActive* theActiveContext) : Mode(0) {
    setActiveContext(this, true);
    initStatechart();
}

ElectricMotor::~ElectricMotor() {
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
        rootState_subState = Off;
        rootState_active = Off;
    }
}

IOxfReactive::TakeEventStatus ElectricMotor::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(evMotorOn_KitchenRobot_id))
                {
                    //## transition 2 
                    if(Mode == 1)
                        {
                            rootState_subState = state_1;
                            state_1_subState = Mix;
                            rootState_active = Mix;
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 3 
                            if(Mode == 2)
                                {
                                    rootState_subState = state_1;
                                    state_1_subState = Blend;
                                    rootState_active = Blend;
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 4 
                                    if(Mode == 3)
                                        {
                                            rootState_subState = state_1;
                                            state_1_subState = Stir;
                                            rootState_active = Stir;
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
            
        }
        break;
        // State Stir
        case Stir:
        {
            if(IS_EVENT_TYPE_OF(evBlend_KitchenRobot_id))
                {
                    state_1_subState = Blend;
                    rootState_active = Blend;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evMix_KitchenRobot_id))
                {
                    state_1_subState = Mix;
                    rootState_active = Mix;
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = state_1_handleEvent();
                }
        }
        break;
        // State Mix
        case Mix:
        {
            if(IS_EVENT_TYPE_OF(evBlend_KitchenRobot_id))
                {
                    state_1_subState = Blend;
                    rootState_active = Blend;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStir_KitchenRobot_id))
                {
                    state_1_subState = Stir;
                    rootState_active = Stir;
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = state_1_handleEvent();
                }
        }
        break;
        // State Blend
        case Blend:
        {
            if(IS_EVENT_TYPE_OF(evMix_KitchenRobot_id))
                {
                    state_1_subState = Mix;
                    rootState_active = Mix;
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStir_KitchenRobot_id))
                {
                    state_1_subState = Stir;
                    rootState_active = Stir;
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = state_1_handleEvent();
                }
        }
        break;
        default:
            break;
    }
    return res;
}

void ElectricMotor::state_1_entDef() {
    rootState_subState = state_1;
    state_1_subState = Mix;
    rootState_active = Mix;
}

IOxfReactive::TakeEventStatus ElectricMotor::state_1_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evMotorOff_KitchenRobot_id))
        {
            state_1_subState = OMNonState;
            rootState_subState = Off;
            rootState_active = Off;
            res = eventConsumed;
        }
    
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ElectricMotor.cpp
*********************************************************************/
