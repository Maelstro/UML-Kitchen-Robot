/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MultiRobot
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: DefaultComponent\DefaultConfig\MultiRobot.h
*********************************************************************/

#ifndef MultiRobot_H
#define MultiRobot_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "KitchenRobot.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsElectricMotor
class ElectricMotor;

//## package KitchenRobot

//## class MultiRobot
class MultiRobot : public OMThread, public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## operation MultiRobot()
    MultiRobot(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~MultiRobot();
    
    ////    Operations    ////

protected :

    //## operation NeedsService()
    OMBoolean NeedsService();
    
    ////    Additional operations    ////

public :

    //## auto_generated
    int getMode() const;
    
    //## auto_generated
    void setMode(int p_Mode);
    
    //## auto_generated
    int getRunning() const;
    
    //## auto_generated
    void setRunning(int p_Running);
    
    //## auto_generated
    int getLidClosed() const;
    
    //## auto_generated
    void setLidClosed(int p_lidClosed);
    
    //## auto_generated
    int getRunTime() const;
    
    //## auto_generated
    void setRunTime(int p_runTime);
    
    //## auto_generated
    ElectricMotor* getItsElectricMotor() const;
    
    //## auto_generated
    void setItsElectricMotor(ElectricMotor* p_ElectricMotor);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int Mode;		//## attribute Mode
    
    int Running;		//## attribute Running
    
    int lidClosed;		//## attribute lidClosed
    
    int runTime;		//## attribute runTime
    
    ////    Relations and components    ////
    
    ElectricMotor* itsElectricMotor;		//## link itsElectricMotor
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    void rootStateEntDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // AllStates:
    //## statechart_method
    inline bool AllStates_IN() const;
    
    //## statechart_method
    void AllStates_entDef();
    
    //## statechart_method
    void AllStates_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus AllStates_processEvent();
    
    // state_2:
    //## statechart_method
    inline bool state_2_IN() const;
    
    //## statechart_method
    void state_2_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_processEvent();
    
    // ServiceOk:
    //## statechart_method
    inline bool ServiceOk_IN() const;
    
    // NeedOfService:
    //## statechart_method
    inline bool NeedOfService_IN() const;
    
    // state_11:
    //## statechart_method
    inline bool state_11_IN() const;
    
    //## statechart_method
    void state_11_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_11_processEvent();
    
    // check:
    //## statechart_method
    inline bool check_IN() const;
    
    // state_10:
    //## statechart_method
    inline bool state_10_IN() const;
    
    //## statechart_method
    void state_10_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent();
    
    // Stir:
    //## statechart_method
    inline bool Stir_IN() const;
    
    // Mix:
    //## statechart_method
    inline bool Mix_IN() const;
    
    // Blend:
    //## statechart_method
    inline bool Blend_IN() const;
    
    // state_1:
    //## statechart_method
    inline bool state_1_IN() const;
    
    //## statechart_method
    void state_1_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_1_processEvent();
    
    // LidOpened:
    //## statechart_method
    inline bool LidOpened_IN() const;
    
    // LidClosed:
    //## statechart_method
    inline bool LidClosed_IN() const;
    
    //## statechart_method
    void LidClosed_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus LidClosed_handleEvent();
    
    // On:
    //## statechart_method
    inline bool On_IN() const;
    
    //## statechart_method
    void On_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent();
    
    // timer:
    //## statechart_method
    inline bool timer_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus timer_handleEvent();
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum MultiRobot_Enum {
        OMNonState = 0,
        AllStates = 1,
        state_2 = 2,
        ServiceOk = 3,
        NeedOfService = 4,
        state_11 = 5,
        check = 6,
        state_10 = 7,
        Stir = 8,
        Mix = 9,
        Blend = 10,
        state_1 = 11,
        LidOpened = 12,
        LidClosed = 13,
        On = 14,
        timer = 15,
        Off = 16
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_2_subState;
    
    int state_2_active;
    
    int state_11_subState;
    
    int state_11_active;
    
    IOxfTimeout* state_11_timeout;
    
    int state_10_subState;
    
    int state_10_active;
    
    int state_1_subState;
    
    int state_1_active;
    
    int LidClosed_subState;
    
    int On_subState;
    
    IOxfTimeout* On_timeout;
//#]
};

inline bool MultiRobot::rootState_IN() const {
    return true;
}

inline bool MultiRobot::AllStates_IN() const {
    return rootState_subState == AllStates;
}

inline bool MultiRobot::state_2_IN() const {
    return AllStates_IN();
}

inline bool MultiRobot::ServiceOk_IN() const {
    return state_2_subState == ServiceOk;
}

inline bool MultiRobot::NeedOfService_IN() const {
    return state_2_subState == NeedOfService;
}

inline bool MultiRobot::state_11_IN() const {
    return AllStates_IN();
}

inline bool MultiRobot::check_IN() const {
    return state_11_subState == check;
}

inline bool MultiRobot::state_10_IN() const {
    return AllStates_IN();
}

inline bool MultiRobot::Stir_IN() const {
    return state_10_subState == Stir;
}

inline bool MultiRobot::Mix_IN() const {
    return state_10_subState == Mix;
}

inline bool MultiRobot::Blend_IN() const {
    return state_10_subState == Blend;
}

inline bool MultiRobot::state_1_IN() const {
    return AllStates_IN();
}

inline bool MultiRobot::LidOpened_IN() const {
    return state_1_subState == LidOpened;
}

inline bool MultiRobot::LidClosed_IN() const {
    return state_1_subState == LidClosed;
}

inline bool MultiRobot::On_IN() const {
    return LidClosed_subState == On;
}

inline bool MultiRobot::timer_IN() const {
    return On_subState == timer;
}

inline bool MultiRobot::Off_IN() const {
    return LidClosed_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MultiRobot.h
*********************************************************************/
