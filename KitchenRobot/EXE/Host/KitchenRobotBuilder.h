/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: KitchenRobotBuilder
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\KitchenRobotBuilder.h
*********************************************************************/

#ifndef KitchenRobotBuilder_H
#define KitchenRobotBuilder_H

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
//## classInstance itsElectricMotor
#include "ElectricMotor.h"
//## classInstance itsMultiRobot
#include "MultiRobot.h"
//## package KitchenRobot

//## class KitchenRobotBuilder
class KitchenRobotBuilder : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedKitchenRobotBuilder;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    KitchenRobotBuilder(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~KitchenRobotBuilder();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ElectricMotor* getItsElectricMotor() const;
    
    //## auto_generated
    MultiRobot* getItsMultiRobot() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    ////    Relations and components    ////
    
    ElectricMotor itsElectricMotor;		//## classInstance itsElectricMotor
    
    MultiRobot itsMultiRobot;		//## classInstance itsMultiRobot
    
    ////    Framework operations    ////

public :

    //## auto_generated
    virtual void destroy();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedKitchenRobotBuilder : virtual public AOMInstance {
    DECLARE_META(KitchenRobotBuilder, OMAnimatedKitchenRobotBuilder)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: EXE\Host\KitchenRobotBuilder.h
*********************************************************************/
