/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: MultiRobot
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\MultiRobot.h
*********************************************************************/

#ifndef MultiRobot_H
#define MultiRobot_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
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

//#[ ignore
#define OMAnim_KitchenRobot_MultiRobot_setMode_int_ARGS_DECLARATION int p_Mode;

#define OMAnim_KitchenRobot_MultiRobot_setRunning_int_ARGS_DECLARATION int p_Running;

#define OMAnim_KitchenRobot_MultiRobot_setLidClosed_int_ARGS_DECLARATION int p_lidClosed;
//#]

//## package KitchenRobot

//## class MultiRobot
class MultiRobot : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMultiRobot;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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
    void state_2_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_processEvent();
    
    // ServiceOk:
    //## statechart_method
    inline bool ServiceOk_IN() const;
    
    // Repairs:
    //## statechart_method
    inline bool Repairs_IN() const;
    
    // NeedOfService:
    //## statechart_method
    inline bool NeedOfService_IN() const;
    
    // state_18:
    //## statechart_method
    inline bool state_18_IN() const;
    
    //## statechart_method
    void state_18_entDef();
    
    //## statechart_method
    void state_18_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_18_processEvent();
    
    // check:
    //## statechart_method
    inline bool check_IN() const;
    
    // state_10:
    //## statechart_method
    inline bool state_10_IN() const;
    
    //## statechart_method
    void state_10_entDef();
    
    //## statechart_method
    void state_10_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_10_processEvent();
    
    // waiting:
    //## statechart_method
    inline bool waiting_IN() const;
    
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
    void On_exit();
    
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
        Repairs = 4,
        NeedOfService = 5,
        state_18 = 6,
        check = 7,
        state_10 = 8,
        waiting = 9,
        Stir = 10,
        Mix = 11,
        Blend = 12,
        state_1 = 13,
        LidOpened = 14,
        LidClosed = 15,
        On = 16,
        timer = 17,
        Off = 18
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_2_subState;
    
    int state_2_active;
    
    IOxfTimeout* state_2_timeout;
    
    int state_18_subState;
    
    int state_18_active;
    
    IOxfTimeout* state_18_timeout;
    
    int state_10_subState;
    
    int state_10_active;
    
    int state_1_subState;
    
    int state_1_active;
    
    int LidClosed_subState;
    
    int On_subState;
    
    IOxfTimeout* On_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(KitchenRobot_MultiRobot_setMode_int)

DECLARE_OPERATION_CLASS(KitchenRobot_MultiRobot_setRunning_int)

DECLARE_OPERATION_CLASS(KitchenRobot_MultiRobot_setLidClosed_int)

//#[ ignore
class OMAnimatedMultiRobot : virtual public AOMInstance {
    DECLARE_REACTIVE_META(MultiRobot, OMAnimatedMultiRobot)
    
    DECLARE_META_OP(KitchenRobot_MultiRobot_setMode_int)
    
    DECLARE_META_OP(KitchenRobot_MultiRobot_setRunning_int)
    
    DECLARE_META_OP(KitchenRobot_MultiRobot_setLidClosed_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AllStates_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ServiceOk_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Repairs_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NeedOfService_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_18_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void check_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_10_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void waiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Stir_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Mix_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Blend_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LidOpened_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LidClosed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void timer_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

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

inline bool MultiRobot::Repairs_IN() const {
    return state_2_subState == Repairs;
}

inline bool MultiRobot::NeedOfService_IN() const {
    return state_2_subState == NeedOfService;
}

inline bool MultiRobot::state_18_IN() const {
    return AllStates_IN();
}

inline bool MultiRobot::check_IN() const {
    return state_18_subState == check;
}

inline bool MultiRobot::state_10_IN() const {
    return AllStates_IN();
}

inline bool MultiRobot::waiting_IN() const {
    return state_10_subState == waiting;
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
	File Path	: EXE\Host\MultiRobot.h
*********************************************************************/
