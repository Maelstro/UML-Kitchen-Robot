/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: ElectricMotor
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\ElectricMotor.h
*********************************************************************/

#ifndef ElectricMotor_H
#define ElectricMotor_H

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
//## package KitchenRobot

//## class ElectricMotor
class ElectricMotor : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedElectricMotor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ElectricMotor(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ElectricMotor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getMode() const;
    
    //## auto_generated
    void setMode(int p_Mode);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int Mode;		//## attribute Mode
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_1:
    //## statechart_method
    inline bool state_1_IN() const;
    
    //## statechart_method
    void state_1_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_1_handleEvent();
    
    // Stir:
    //## statechart_method
    inline bool Stir_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Stir_handleEvent();
    
    // Mix:
    //## statechart_method
    inline bool Mix_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Mix_handleEvent();
    
    // Blend:
    //## statechart_method
    inline bool Blend_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Blend_handleEvent();
    
    // Off:
    //## statechart_method
    inline bool Off_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus OffTakeevMotorOn();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Off_handleEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum ElectricMotor_Enum {
        OMNonState = 0,
        state_1 = 1,
        Stir = 2,
        Mix = 3,
        Blend = 4,
        Off = 5
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_1_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedElectricMotor : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ElectricMotor, OMAnimatedElectricMotor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Stir_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Mix_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Blend_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ElectricMotor::rootState_IN() const {
    return true;
}

inline bool ElectricMotor::state_1_IN() const {
    return rootState_subState == state_1;
}

inline bool ElectricMotor::Stir_IN() const {
    return state_1_subState == Stir;
}

inline bool ElectricMotor::Mix_IN() const {
    return state_1_subState == Mix;
}

inline bool ElectricMotor::Blend_IN() const {
    return state_1_subState == Blend;
}

inline bool ElectricMotor::Off_IN() const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: EXE\Host\ElectricMotor.h
*********************************************************************/
