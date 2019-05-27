/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MultiRobot
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: DefaultComponent\DefaultConfig\MultiRobot.cpp
*********************************************************************/

//## auto_generated
#include "MultiRobot.h"
//## link itsElectricMotor
#include "ElectricMotor.h"
//## package KitchenRobot

//## class MultiRobot
MultiRobot::MultiRobot(IOxfActive* theActiveContext) : Mode(0), Running(0), lidClosed(0), runTime(0) {
    setActiveContext(this, true);
    itsElectricMotor = NULL;
    initStatechart();
    //#[ operation MultiRobot()
    setItsElectricMotor(new ElectricMotor);
    //#]
}

MultiRobot::~MultiRobot() {
    cleanUpRelations();
    cancelTimeouts();
}

OMBoolean MultiRobot::NeedsService() {
    //#[ operation NeedsService()
    return (runTime > 100);
    //#]
}

int MultiRobot::getMode() const {
    return Mode;
}

void MultiRobot::setMode(int p_Mode) {
    Mode = p_Mode;
}

int MultiRobot::getRunning() const {
    return Running;
}

void MultiRobot::setRunning(int p_Running) {
    Running = p_Running;
}

int MultiRobot::getLidClosed() const {
    return lidClosed;
}

void MultiRobot::setLidClosed(int p_lidClosed) {
    lidClosed = p_lidClosed;
}

int MultiRobot::getRunTime() const {
    return runTime;
}

void MultiRobot::setRunTime(int p_runTime) {
    runTime = p_runTime;
}

ElectricMotor* MultiRobot::getItsElectricMotor() const {
    return itsElectricMotor;
}

void MultiRobot::setItsElectricMotor(ElectricMotor* p_ElectricMotor) {
    itsElectricMotor = p_ElectricMotor;
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
    state_11_subState = OMNonState;
    state_11_active = OMNonState;
    state_11_timeout = NULL;
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
            itsElectricMotor = NULL;
        }
}

void MultiRobot::cancelTimeouts() {
    cancel(state_11_timeout);
    cancel(On_timeout);
}

bool MultiRobot::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_11_timeout == arg)
        {
            state_11_timeout = NULL;
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
    rootState_subState = AllStates;
    rootState_active = AllStates;
    state_1_entDef();
    state_2_entDef();
    state_10_entDef();
    state_11_entDef();
}

void MultiRobot::AllStates_exit() {
    switch (state_1_subState) {
        // State LidClosed
        case LidClosed:
        {
            switch (LidClosed_subState) {
                // State On
                case On:
                {
                    // State timer
                    if(On_subState == timer)
                        {
                            cancel(On_timeout);
                        }
                    On_subState = OMNonState;
                }
                break;
                default:
                    break;
            }
            LidClosed_subState = OMNonState;
        }
        break;
        // State LidOpened
        case LidOpened:
        {
            //#[ state AllStates.state_1.LidOpened.(Exit) 
            std::cout<<"Lid is closed"<<std::endl;
            //#]
        }
        break;
        default:
            break;
    }
    state_1_subState = OMNonState;
    switch (state_2_subState) {
        // State ServiceOk
        case ServiceOk:
        {
            popNullTransition();
        }
        break;
        
        default:
            break;
    }
    state_2_subState = OMNonState;
    //#[ state AllStates.state_2.(Exit) 
    std::cout<<"Lid is closed"<<std::endl;
    //#]
    state_10_subState = OMNonState;
    // State check
    if(state_11_subState == check)
        {
            cancel(state_11_timeout);
        }
    state_11_subState = OMNonState;
    
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
    // State state_11
    if(state_11_processEvent() != eventNotConsumed)
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
    //#[ state AllStates.state_2.(Entry) 
    std::cout<<"Lid is opened"<<std::endl;
    //#]
    pushNullTransition();
    state_2_subState = ServiceOk;
    state_2_active = ServiceOk;
    //#[ state AllStates.state_2.ServiceOk.(Entry) 
    runTime = 0;
    //#]
}

IOxfReactive::TakeEventStatus MultiRobot::state_2_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_2_active) {
        // State ServiceOk
        case ServiceOk:
        {
            if(IS_EVENT_TYPE_OF(evService_KitchenRobot_id))
                {
                    popNullTransition();
                    pushNullTransition();
                    state_2_subState = ServiceOk;
                    state_2_active = ServiceOk;
                    //#[ state AllStates.state_2.ServiceOk.(Entry) 
                    runTime = 0;
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 19 
                    if(NeedsService())
                        {
                            popNullTransition();
                            state_2_subState = NeedOfService;
                            state_2_active = NeedOfService;
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State NeedOfService
        case NeedOfService:
        {
            if(IS_EVENT_TYPE_OF(evService_KitchenRobot_id))
                {
                    pushNullTransition();
                    state_2_subState = ServiceOk;
                    state_2_active = ServiceOk;
                    //#[ state AllStates.state_2.ServiceOk.(Entry) 
                    runTime = 0;
                    //#]
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void MultiRobot::state_11_entDef() {
    
    state_11_subState = check;
    state_11_active = check;
    //#[ state AllStates.state_11.check.(Entry) 
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
    state_11_timeout = scheduleTimeout(100, NULL);
}

IOxfReactive::TakeEventStatus MultiRobot::state_11_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State check
    if(state_11_active == check)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_11_timeout)
                        {
                            cancel(state_11_timeout);
                            state_11_subState = check;
                            state_11_active = check;
                            //#[ state AllStates.state_11.check.(Entry) 
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
                            state_11_timeout = scheduleTimeout(100, NULL);
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void MultiRobot::state_10_entDef() {
    
    state_10_subState = Mix;
    state_10_active = Mix;
    //#[ state AllStates.state_10.Mix.(Entry) 
    itsElectricMotor->setMode(1);         
    itsElectricMotor->GEN(evMix);
    //#]
}

IOxfReactive::TakeEventStatus MultiRobot::state_10_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_10_active) {
        // State Mix
        case Mix:
        {
            if(IS_EVENT_TYPE_OF(evBlend_KitchenRobot_id))
                {
                    state_10_subState = Blend;
                    state_10_active = Blend;
                    //#[ state AllStates.state_10.Blend.(Entry) 
                    itsElectricMotor->setMode(2);         
                    itsElectricMotor->GEN(evBlend);
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStir_KitchenRobot_id))
                {
                    state_10_subState = Stir;
                    state_10_active = Stir;
                    //#[ state AllStates.state_10.Stir.(Entry) 
                    itsElectricMotor->setMode(3);         
                    itsElectricMotor->GEN(evStir);
                    //#]
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Blend
        case Blend:
        {
            if(IS_EVENT_TYPE_OF(evMix_KitchenRobot_id))
                {
                    state_10_subState = Mix;
                    state_10_active = Mix;
                    //#[ state AllStates.state_10.Mix.(Entry) 
                    itsElectricMotor->setMode(1);         
                    itsElectricMotor->GEN(evMix);
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evStir_KitchenRobot_id))
                {
                    state_10_subState = Stir;
                    state_10_active = Stir;
                    //#[ state AllStates.state_10.Stir.(Entry) 
                    itsElectricMotor->setMode(3);         
                    itsElectricMotor->GEN(evStir);
                    //#]
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Stir
        case Stir:
        {
            if(IS_EVENT_TYPE_OF(evBlend_KitchenRobot_id))
                {
                    state_10_subState = Blend;
                    state_10_active = Blend;
                    //#[ state AllStates.state_10.Blend.(Entry) 
                    itsElectricMotor->setMode(2);         
                    itsElectricMotor->GEN(evBlend);
                    //#]
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(evMix_KitchenRobot_id))
                {
                    state_10_subState = Mix;
                    state_10_active = Mix;
                    //#[ state AllStates.state_10.Mix.(Entry) 
                    itsElectricMotor->setMode(1);         
                    itsElectricMotor->GEN(evMix);
                    //#]
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void MultiRobot::state_1_entDef() {
    
    LidClosed_entDef();
}

IOxfReactive::TakeEventStatus MultiRobot::state_1_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_1_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(evStart_KitchenRobot_id))
                {
                    On_entDef();
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
                    //#[ state AllStates.state_1.LidOpened.(Exit) 
                    std::cout<<"Lid is closed"<<std::endl;
                    //#]
                    LidClosed_entDef();
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
    state_1_subState = LidClosed;
    LidClosed_subState = Off;
    state_1_active = Off;
}

IOxfReactive::TakeEventStatus MultiRobot::LidClosed_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evOpen_KitchenRobot_id))
        {
            switch (LidClosed_subState) {
                // State On
                case On:
                {
                    // State timer
                    if(On_subState == timer)
                        {
                            cancel(On_timeout);
                        }
                    On_subState = OMNonState;
                }
                break;
                default:
                    break;
            }
            LidClosed_subState = OMNonState;
            state_1_subState = LidOpened;
            state_1_active = LidOpened;
            //#[ state AllStates.state_1.LidOpened.(Entry) 
            std::cout<<"Lid is opened"<<std::endl;
            //#]
            res = eventConsumed;
        }
    
    
    return res;
}

void MultiRobot::On_entDef() {
    LidClosed_subState = On;
    On_subState = timer;
    state_1_active = timer;
    //#[ state AllStates.state_1.LidClosed.On.timer.(Entry) 
                runTime++;
    //#]
    On_timeout = scheduleTimeout(100, NULL);
}

IOxfReactive::TakeEventStatus MultiRobot::On_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evStop_KitchenRobot_id))
        {
            // State timer
            if(On_subState == timer)
                {
                    cancel(On_timeout);
                }
            On_subState = OMNonState;
            LidClosed_subState = Off;
            state_1_active = Off;
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
                    cancel(On_timeout);
                    On_subState = timer;
                    state_1_active = timer;
                    //#[ state AllStates.state_1.LidClosed.On.timer.(Entry) 
                                runTime++;
                    //#]
                    On_timeout = scheduleTimeout(100, NULL);
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MultiRobot.cpp
*********************************************************************/
