/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: MultiRobot
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\MultiRobot.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "MultiRobot.h"
//## link itsElectricMotor
#include "ElectricMotor.h"
//#[ ignore
#define KitchenRobot_MultiRobot_MultiRobot_SERIALIZE OM_NO_OP

#define KitchenRobot_MultiRobot_NeedsService_SERIALIZE OM_NO_OP

#define OMAnim_KitchenRobot_MultiRobot_setMode_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Mode)

#define OMAnim_KitchenRobot_MultiRobot_setMode_int_SERIALIZE_RET_VAL

#define OMAnim_KitchenRobot_MultiRobot_setRunning_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_Running)

#define OMAnim_KitchenRobot_MultiRobot_setRunning_int_SERIALIZE_RET_VAL

#define OMAnim_KitchenRobot_MultiRobot_setLidClosed_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_lidClosed)

#define OMAnim_KitchenRobot_MultiRobot_setLidClosed_int_SERIALIZE_RET_VAL
//#]

//## package KitchenRobot

//## class MultiRobot
MultiRobot::MultiRobot(IOxfActive* theActiveContext) : Mode(1), Running(0), lidClosed(0), runTime(0) {
    NOTIFY_ACTIVE_CONSTRUCTOR(MultiRobot, MultiRobot(), 0, KitchenRobot_MultiRobot_MultiRobot_SERIALIZE);
    setActiveContext(this, true);
    itsElectricMotor = NULL;
    initStatechart();
    //#[ operation MultiRobot()
    setItsElectricMotor(new ElectricMotor);
    //#]
}

MultiRobot::~MultiRobot() {
    NOTIFY_DESTRUCTOR(~MultiRobot, true);
    cleanUpRelations();
    cancelTimeouts();
}

OMBoolean MultiRobot::NeedsService() {
    NOTIFY_OPERATION(NeedsService, NeedsService(), 0, KitchenRobot_MultiRobot_NeedsService_SERIALIZE);
    //#[ operation NeedsService()
    return (runTime > 10);
    //#]
}

int MultiRobot::getMode() const {
    return Mode;
}

void MultiRobot::setMode(int p_Mode) {
    Mode = p_Mode;
    NOTIFY_SET_OPERATION;
}

int MultiRobot::getRunning() const {
    return Running;
}

void MultiRobot::setRunning(int p_Running) {
    Running = p_Running;
    NOTIFY_SET_OPERATION;
}

int MultiRobot::getLidClosed() const {
    return lidClosed;
}

void MultiRobot::setLidClosed(int p_lidClosed) {
    lidClosed = p_lidClosed;
    NOTIFY_SET_OPERATION;
}

int MultiRobot::getRunTime() const {
    return runTime;
}

void MultiRobot::setRunTime(int p_runTime) {
    runTime = p_runTime;
    NOTIFY_SET_OPERATION;
}

ElectricMotor* MultiRobot::getItsElectricMotor() const {
    return itsElectricMotor;
}

void MultiRobot::setItsElectricMotor(ElectricMotor* p_ElectricMotor) {
    itsElectricMotor = p_ElectricMotor;
    if(p_ElectricMotor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsElectricMotor", p_ElectricMotor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsElectricMotor");
        }
}

bool MultiRobot::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void MultiRobot::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_2_subState = OMNonState;
    state_2_active = OMNonState;
    state_2_timeout = NULL;
    state_18_subState = OMNonState;
    state_18_active = OMNonState;
    state_18_timeout = NULL;
    state_10_subState = OMNonState;
    state_10_active = OMNonState;
    state_1_subState = OMNonState;
    state_1_active = OMNonState;
    LidClosed_subState = OMNonState;
    On_subState = OMNonState;
    On_timeout = NULL;
}

void MultiRobot::cleanUpRelations() {
    if(itsElectricMotor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsElectricMotor");
            itsElectricMotor = NULL;
        }
}

void MultiRobot::cancelTimeouts() {
    cancel(state_2_timeout);
    cancel(state_18_timeout);
    cancel(On_timeout);
}

bool MultiRobot::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_2_timeout == arg)
        {
            state_2_timeout = NULL;
            res = true;
        }
    if(state_18_timeout == arg)
        {
            state_18_timeout = NULL;
            res = true;
        }
    if(On_timeout == arg)
        {
            On_timeout = NULL;
            res = true;
        }
    return res;
}

void MultiRobot::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        rootStateEntDef();
    }
}

void MultiRobot::rootStateEntDef() {
    AllStates_entDef();
}

IOxfReactive::TakeEventStatus MultiRobot::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State AllStates
    if(rootState_active == AllStates)
        {
            res = AllStates_processEvent();
        }
    return res;
}

void MultiRobot::AllStates_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.AllStates");
    rootState_subState = AllStates;
    rootState_active = AllStates;
    state_1_entDef();
    state_2_entDef();
    state_10_entDef();
    state_18_entDef();
}

void MultiRobot::AllStates_exit() {
    switch (state_1_subState) {
        // State LidClosed
        case LidClosed:
        {
            switch (LidClosed_subState) {
                // State Off
                case Off:
                {
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidClosed.Off");
                }
                break;
                // State On
                case On:
                {
                    On_exit();
                }
                break;
                default:
                    break;
            }
            LidClosed_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidClosed");
        }
        break;
        // State LidOpened
        case LidOpened:
        {
            //#[ state AllStates.state_1.LidOpened.(Exit) 
            std::cout<<"Lid is closed"<<std::endl;
            //#]
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidOpened");
        }
        break;
        default:
            break;
    }
    state_1_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.AllStates.state_1");
    state_2_exit();
    state_10_exit();
    state_18_exit();
    
    NOTIFY_STATE_EXITED("ROOT.AllStates");
}

IOxfReactive::TakeEventStatus MultiRobot::AllStates_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_1
    if(state_1_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(AllStates))
                {
                    return res;
                }
        }
    // State state_2
    if(state_2_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(AllStates))
                {
                    return res;
                }
        }
    // State state_10
    if(state_10_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(AllStates))
                {
                    return res;
                }
        }
    // State state_18
    if(state_18_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(AllStates))
                {
                    return res;
                }
        }
    
    return res;
}

void MultiRobot::state_2_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_2");
    //#[ state AllStates.state_2.(Entry) 
    std::cout<<"Lid is opened"<<std::endl;
    //#]
    NOTIFY_TRANSITION_STARTED("7");
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_2.ServiceOk");
    state_2_subState = ServiceOk;
    state_2_active = ServiceOk;
    //#[ state AllStates.state_2.ServiceOk.(Entry) 
    runTime = 0;
    //#]
    NOTIFY_TRANSITION_TERMINATED("7");
}

void MultiRobot::state_2_exit() {
    switch (state_2_subState) {
        // State ServiceOk
        case ServiceOk:
        {
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_2.ServiceOk");
        }
        break;
        // State NeedOfService
        case NeedOfService:
        {
            cancel(state_2_timeout);
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_2.NeedOfService");
        }
        break;
        // State Repairs
        case Repairs:
        {
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_2.Repairs");
        }
        break;
        default:
            break;
    }
    state_2_subState = OMNonState;
    //#[ state AllStates.state_2.(Exit) 
    std::cout<<"Lid is closed"<<std::endl;
    //#]
    NOTIFY_STATE_EXITED("ROOT.AllStates.state_2");
}

IOxfReactive::TakeEventStatus MultiRobot::state_2_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_2_active) {
        // State ServiceOk
        case ServiceOk:
        {
            if(IS_EVENT_TYPE_OF(evService_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_2.ServiceOk");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_2.NeedOfService");
                    state_2_subState = NeedOfService;
                    state_2_active = NeedOfService;
                    //#[ state AllStates.state_2.NeedOfService.(Entry) 
                    std::cout<<"The machine is being serviced."<<std::endl;
                    Running = 0;
                    //#]
                    state_2_timeout = scheduleTimeout(1000, "ROOT.AllStates.state_2.NeedOfService");
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State NeedOfService
        case NeedOfService:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_2_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("19");
                            cancel(state_2_timeout);
                            NOTIFY_STATE_EXITED("ROOT.AllStates.state_2.NeedOfService");
                            NOTIFY_STATE_ENTERED("ROOT.AllStates.state_2.Repairs");
                            state_2_subState = Repairs;
                            state_2_active = Repairs;
                            //#[ state AllStates.state_2.Repairs.(Entry) 
                             Running = 1;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("19");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Repairs
        case Repairs:
        {
            if(IS_EVENT_TYPE_OF(evStart_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_2.Repairs");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_2.ServiceOk");
                    state_2_subState = ServiceOk;
                    state_2_active = ServiceOk;
                    //#[ state AllStates.state_2.ServiceOk.(Entry) 
                    runTime = 0;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void MultiRobot::state_18_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_18");
    NOTIFY_TRANSITION_STARTED("14");
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_18.check");
    state_18_subState = check;
    state_18_active = check;
    //#[ state AllStates.state_18.check.(Entry) 
    if ((Running == 0) && !IS_IN (Off))
    	{
    		GEN(evStop());
    	}
    else if((Running == 1) && !IS_IN (On))     
    	{
    		GEN(evStart);
    	}       
    	
    if ((lidClosed == 0) && !IS_IN (LidOpened))
    	{
    		GEN(evOpen());
    	}
    else if((lidClosed == 1) && !IS_IN (LidClosed))     
    	{
    		GEN(evClose);
    	}   
    	
    	
    if ((Mode == 1) && !IS_IN (Mix))
    	{
    		GEN(evMix());
    	}
    else if ((Mode == 2) && !IS_IN (Blend))
    	{
    		GEN(evBlend());
    	}    
    else if ((Mode == 3) && !IS_IN (Stir))
    	{
    		GEN(evStir());
    	}
    //#]
    state_18_timeout = scheduleTimeout(100, "ROOT.AllStates.state_18.check");
    NOTIFY_TRANSITION_TERMINATED("14");
}

void MultiRobot::state_18_exit() {
    // State check
    if(state_18_subState == check)
        {
            cancel(state_18_timeout);
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_18.check");
        }
    state_18_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.AllStates.state_18");
}

IOxfReactive::TakeEventStatus MultiRobot::state_18_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State check
    if(state_18_active == check)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_18_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            cancel(state_18_timeout);
                            NOTIFY_STATE_EXITED("ROOT.AllStates.state_18.check");
                            NOTIFY_STATE_ENTERED("ROOT.AllStates.state_18.check");
                            state_18_subState = check;
                            state_18_active = check;
                            //#[ state AllStates.state_18.check.(Entry) 
                            if ((Running == 0) && !IS_IN (Off))
                            	{
                            		GEN(evStop());
                            	}
                            else if((Running == 1) && !IS_IN (On))     
                            	{
                            		GEN(evStart);
                            	}       
                            	
                            if ((lidClosed == 0) && !IS_IN (LidOpened))
                            	{
                            		GEN(evOpen());
                            	}
                            else if((lidClosed == 1) && !IS_IN (LidClosed))     
                            	{
                            		GEN(evClose);
                            	}   
                            	
                            	
                            if ((Mode == 1) && !IS_IN (Mix))
                            	{
                            		GEN(evMix());
                            	}
                            else if ((Mode == 2) && !IS_IN (Blend))
                            	{
                            		GEN(evBlend());
                            	}    
                            else if ((Mode == 3) && !IS_IN (Stir))
                            	{
                            		GEN(evStir());
                            	}
                            //#]
                            state_18_timeout = scheduleTimeout(100, "ROOT.AllStates.state_18.check");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void MultiRobot::state_10_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10");
    NOTIFY_TRANSITION_STARTED("16");
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.waiting");
    state_10_subState = waiting;
    state_10_active = waiting;
    NOTIFY_TRANSITION_TERMINATED("16");
}

void MultiRobot::state_10_exit() {
    switch (state_10_subState) {
        // State Mix
        case Mix:
        {
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Mix");
        }
        break;
        // State Blend
        case Blend:
        {
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Blend");
        }
        break;
        // State Stir
        case Stir:
        {
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Stir");
        }
        break;
        // State waiting
        case waiting:
        {
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.waiting");
        }
        break;
        default:
            break;
    }
    state_10_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10");
}

IOxfReactive::TakeEventStatus MultiRobot::state_10_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        // State Mix
        case Mix:
        {
            if(IS_EVENT_TYPE_OF(evBlend_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Mix");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.Blend");
                    state_10_subState = Blend;
                    state_10_active = Blend;
                    //#[ state AllStates.state_10.Blend.(Entry) 
                    itsElectricMotor->setMode(2);         
                    itsElectricMotor->GEN(evBlend);
                    std::cout<<"Blending"<<std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("11");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStir_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Mix");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.Stir");
                    state_10_subState = Stir;
                    state_10_active = Stir;
                    //#[ state AllStates.state_10.Stir.(Entry) 
                    itsElectricMotor->setMode(3);         
                    itsElectricMotor->GEN(evStir);    
                    std::cout<<"Stirring"<<std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Blend
        case Blend:
        {
            if(IS_EVENT_TYPE_OF(evStop_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("17");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Blend");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.waiting");
                    state_10_subState = waiting;
                    state_10_active = waiting;
                    NOTIFY_TRANSITION_TERMINATED("17");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evMix_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Blend");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.Mix");
                    state_10_subState = Mix;
                    state_10_active = Mix;
                    //#[ state AllStates.state_10.Mix.(Entry) 
                    if(lidClosed == 1){
                    itsElectricMotor->setMode(1);         
                    itsElectricMotor->GEN(evMix);
                    std::cout<<"Mixing"<<std::endl;     
                    }
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStir_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Blend");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.Stir");
                    state_10_subState = Stir;
                    state_10_active = Stir;
                    //#[ state AllStates.state_10.Stir.(Entry) 
                    itsElectricMotor->setMode(3);         
                    itsElectricMotor->GEN(evStir);    
                    std::cout<<"Stirring"<<std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Stir
        case Stir:
        {
            if(IS_EVENT_TYPE_OF(evStop_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Stir");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.waiting");
                    state_10_subState = waiting;
                    state_10_active = waiting;
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evBlend_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("13");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Stir");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.Blend");
                    state_10_subState = Blend;
                    state_10_active = Blend;
                    //#[ state AllStates.state_10.Blend.(Entry) 
                    itsElectricMotor->setMode(2);         
                    itsElectricMotor->GEN(evBlend);
                    std::cout<<"Blending"<<std::endl;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("13");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evMix_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.Stir");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.Mix");
                    state_10_subState = Mix;
                    state_10_active = Mix;
                    //#[ state AllStates.state_10.Mix.(Entry) 
                    if(lidClosed == 1){
                    itsElectricMotor->setMode(1);         
                    itsElectricMotor->GEN(evMix);
                    std::cout<<"Mixing"<<std::endl;     
                    }
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State waiting
        case waiting:
        {
            if(IS_EVENT_TYPE_OF(evStart_KitchenRobot_id))
                {
                    //## transition 22 
                    if(Mode ==1)
                        {
                            NOTIFY_TRANSITION_STARTED("25");
                            NOTIFY_TRANSITION_STARTED("22");
                            NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.waiting");
                            NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.Mix");
                            state_10_subState = Mix;
                            state_10_active = Mix;
                            //#[ state AllStates.state_10.Mix.(Entry) 
                            if(lidClosed == 1){
                            itsElectricMotor->setMode(1);         
                            itsElectricMotor->GEN(evMix);
                            std::cout<<"Mixing"<<std::endl;     
                            }
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("22");
                            NOTIFY_TRANSITION_TERMINATED("25");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 23 
                            if(Mode == 2)
                                {
                                    NOTIFY_TRANSITION_STARTED("25");
                                    NOTIFY_TRANSITION_STARTED("23");
                                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.waiting");
                                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.Blend");
                                    state_10_subState = Blend;
                                    state_10_active = Blend;
                                    //#[ state AllStates.state_10.Blend.(Entry) 
                                    itsElectricMotor->setMode(2);         
                                    itsElectricMotor->GEN(evBlend);
                                    std::cout<<"Blending"<<std::endl;
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("23");
                                    NOTIFY_TRANSITION_TERMINATED("25");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 24 
                                    if(Mode == 3)
                                        {
                                            NOTIFY_TRANSITION_STARTED("25");
                                            NOTIFY_TRANSITION_STARTED("24");
                                            NOTIFY_STATE_EXITED("ROOT.AllStates.state_10.waiting");
                                            NOTIFY_STATE_ENTERED("ROOT.AllStates.state_10.Stir");
                                            state_10_subState = Stir;
                                            state_10_active = Stir;
                                            //#[ state AllStates.state_10.Stir.(Entry) 
                                            itsElectricMotor->setMode(3);         
                                            itsElectricMotor->GEN(evStir);    
                                            std::cout<<"Stirring"<<std::endl;
                                            //#]
                                            NOTIFY_TRANSITION_TERMINATED("24");
                                            NOTIFY_TRANSITION_TERMINATED("25");
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void MultiRobot::state_1_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_1");
    NOTIFY_TRANSITION_STARTED("3");
    LidClosed_entDef();
    NOTIFY_TRANSITION_TERMINATED("3");
}

IOxfReactive::TakeEventStatus MultiRobot::state_1_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_1_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(evStart_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidClosed.Off");
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = LidClosed_handleEvent();
                }
        }
        break;
        // State timer
        case timer:
        {
            res = timer_handleEvent();
        }
        break;
        // State LidOpened
        case LidOpened:
        {
            if(IS_EVENT_TYPE_OF(evClose_KitchenRobot_id))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    //#[ state AllStates.state_1.LidOpened.(Exit) 
                    std::cout<<"Lid is closed"<<std::endl;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidOpened");
                    LidClosed_entDef();
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void MultiRobot::LidClosed_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_1.LidClosed");
    state_1_subState = LidClosed;
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_1.LidClosed.Off");
    LidClosed_subState = Off;
    state_1_active = Off;
    //#[ state AllStates.state_1.LidClosed.Off.(Entry) 
    std::cout<<"The machine has stopped."<<std::endl;
    //#]
    NOTIFY_TRANSITION_TERMINATED("4");
}

IOxfReactive::TakeEventStatus MultiRobot::LidClosed_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evOpen_KitchenRobot_id))
        {
            NOTIFY_TRANSITION_STARTED("1");
            switch (LidClosed_subState) {
                // State Off
                case Off:
                {
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidClosed.Off");
                }
                break;
                // State On
                case On:
                {
                    On_exit();
                }
                break;
                default:
                    break;
            }
            LidClosed_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidClosed");
            NOTIFY_STATE_ENTERED("ROOT.AllStates.state_1.LidOpened");
            state_1_subState = LidOpened;
            state_1_active = LidOpened;
            //#[ state AllStates.state_1.LidOpened.(Entry) 
            std::cout<<"Lid is opened"<<std::endl;
            //#]
            NOTIFY_TRANSITION_TERMINATED("1");
            res = eventConsumed;
        }
    
    
    return res;
}

void MultiRobot::On_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_1.LidClosed.On");
    LidClosed_subState = On;
    //#[ state AllStates.state_1.LidClosed.On.(Entry) 
                            std::cout<<"The machine has started."<<std::endl;
    //#]
    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_1.LidClosed.On.timer");
    On_subState = timer;
    state_1_active = timer;
    //#[ state AllStates.state_1.LidClosed.On.timer.(Entry) 
                runTime++;
    //#]
    On_timeout = scheduleTimeout(10, "ROOT.AllStates.state_1.LidClosed.On.timer");
}

void MultiRobot::On_exit() {
    // State timer
    if(On_subState == timer)
        {
            cancel(On_timeout);
            NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidClosed.On.timer");
        }
    On_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidClosed.On");
}

IOxfReactive::TakeEventStatus MultiRobot::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evStop_KitchenRobot_id))
        {
            NOTIFY_TRANSITION_STARTED("6");
            On_exit();
            NOTIFY_STATE_ENTERED("ROOT.AllStates.state_1.LidClosed.Off");
            LidClosed_subState = Off;
            state_1_active = Off;
            //#[ state AllStates.state_1.LidClosed.Off.(Entry) 
            std::cout<<"The machine has stopped."<<std::endl;
            //#]
            NOTIFY_TRANSITION_TERMINATED("6");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = LidClosed_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus MultiRobot::timer_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == On_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    cancel(On_timeout);
                    NOTIFY_STATE_EXITED("ROOT.AllStates.state_1.LidClosed.On.timer");
                    NOTIFY_STATE_ENTERED("ROOT.AllStates.state_1.LidClosed.On.timer");
                    On_subState = timer;
                    state_1_active = timer;
                    //#[ state AllStates.state_1.LidClosed.On.timer.(Entry) 
                                runTime++;
                    //#]
                    On_timeout = scheduleTimeout(10, "ROOT.AllStates.state_1.LidClosed.On.timer");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMultiRobot::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("lidClosed", x2String(myReal->lidClosed));
    aomsAttributes->addAttribute("Mode", x2String(myReal->Mode));
    aomsAttributes->addAttribute("Running", x2String(myReal->Running));
    aomsAttributes->addAttribute("runTime", x2String(myReal->runTime));
}

void OMAnimatedMultiRobot::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsElectricMotor", false, true);
    if(myReal->itsElectricMotor)
        {
            aomsRelations->ADD_ITEM(myReal->itsElectricMotor);
        }
}

void OMAnimatedMultiRobot::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == MultiRobot::AllStates)
        {
            AllStates_serializeStates(aomsState);
        }
}

void OMAnimatedMultiRobot::AllStates_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates");
    state_1_serializeStates(aomsState);
    state_2_serializeStates(aomsState);
    state_10_serializeStates(aomsState);
    state_18_serializeStates(aomsState);
}

void OMAnimatedMultiRobot::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_2");
    switch (myReal->state_2_subState) {
        case MultiRobot::ServiceOk:
        {
            ServiceOk_serializeStates(aomsState);
        }
        break;
        case MultiRobot::NeedOfService:
        {
            NeedOfService_serializeStates(aomsState);
        }
        break;
        case MultiRobot::Repairs:
        {
            Repairs_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMultiRobot::ServiceOk_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_2.ServiceOk");
}

void OMAnimatedMultiRobot::Repairs_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_2.Repairs");
}

void OMAnimatedMultiRobot::NeedOfService_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_2.NeedOfService");
}

void OMAnimatedMultiRobot::state_18_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_18");
    if(myReal->state_18_subState == MultiRobot::check)
        {
            check_serializeStates(aomsState);
        }
}

void OMAnimatedMultiRobot::check_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_18.check");
}

void OMAnimatedMultiRobot::state_10_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_10");
    switch (myReal->state_10_subState) {
        case MultiRobot::Mix:
        {
            Mix_serializeStates(aomsState);
        }
        break;
        case MultiRobot::Blend:
        {
            Blend_serializeStates(aomsState);
        }
        break;
        case MultiRobot::Stir:
        {
            Stir_serializeStates(aomsState);
        }
        break;
        case MultiRobot::waiting:
        {
            waiting_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMultiRobot::waiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_10.waiting");
}

void OMAnimatedMultiRobot::Stir_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_10.Stir");
}

void OMAnimatedMultiRobot::Mix_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_10.Mix");
}

void OMAnimatedMultiRobot::Blend_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_10.Blend");
}

void OMAnimatedMultiRobot::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_1");
    switch (myReal->state_1_subState) {
        case MultiRobot::LidClosed:
        {
            LidClosed_serializeStates(aomsState);
        }
        break;
        case MultiRobot::LidOpened:
        {
            LidOpened_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMultiRobot::LidOpened_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_1.LidOpened");
}

void OMAnimatedMultiRobot::LidClosed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_1.LidClosed");
    switch (myReal->LidClosed_subState) {
        case MultiRobot::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case MultiRobot::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedMultiRobot::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_1.LidClosed.On");
    if(myReal->On_subState == MultiRobot::timer)
        {
            timer_serializeStates(aomsState);
        }
}

void OMAnimatedMultiRobot::timer_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_1.LidClosed.On.timer");
}

void OMAnimatedMultiRobot::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AllStates.state_1.LidClosed.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(MultiRobot, KitchenRobot, KitchenRobot, false, OMAnimatedMultiRobot)

IMPLEMENT_META_OP(OMAnimatedMultiRobot, KitchenRobot_MultiRobot_setMode_int, "setMode", FALSE, "setMode(int)", 1)

IMPLEMENT_OP_CALL(KitchenRobot_MultiRobot_setMode_int, MultiRobot, setMode(p_Mode), NO_OP())

IMPLEMENT_META_OP(OMAnimatedMultiRobot, KitchenRobot_MultiRobot_setRunning_int, "setRunning", FALSE, "setRunning(int)", 1)

IMPLEMENT_OP_CALL(KitchenRobot_MultiRobot_setRunning_int, MultiRobot, setRunning(p_Running), NO_OP())

IMPLEMENT_META_OP(OMAnimatedMultiRobot, KitchenRobot_MultiRobot_setLidClosed_int, "setLidClosed", FALSE, "setLidClosed(int)", 1)

IMPLEMENT_OP_CALL(KitchenRobot_MultiRobot_setLidClosed_int, MultiRobot, setLidClosed(p_lidClosed), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: EXE\Host\MultiRobot.cpp
*********************************************************************/
