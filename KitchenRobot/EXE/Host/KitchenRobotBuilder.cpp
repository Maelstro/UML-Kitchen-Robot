/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: KitchenRobotBuilder
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\KitchenRobotBuilder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "KitchenRobotBuilder.h"
//#[ ignore
#define KitchenRobot_KitchenRobotBuilder_KitchenRobotBuilder_SERIALIZE OM_NO_OP
//#]

//## package KitchenRobot

//## class KitchenRobotBuilder
KitchenRobotBuilder::KitchenRobotBuilder(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(KitchenRobotBuilder, KitchenRobotBuilder(), 0, KitchenRobot_KitchenRobotBuilder_KitchenRobotBuilder_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsMultiRobot.setShouldDelete(false);
        }
        {
            itsElectricMotor.setShouldDelete(false);
        }
    }
    initRelations();
}

KitchenRobotBuilder::~KitchenRobotBuilder() {
    NOTIFY_DESTRUCTOR(~KitchenRobotBuilder, true);
}

ElectricMotor* KitchenRobotBuilder::getItsElectricMotor() const {
    return (ElectricMotor*) &itsElectricMotor;
}

MultiRobot* KitchenRobotBuilder::getItsMultiRobot() const {
    return (MultiRobot*) &itsMultiRobot;
}

bool KitchenRobotBuilder::startBehavior() {
    bool done = true;
    done &= itsElectricMotor.startBehavior();
    done &= itsMultiRobot.startBehavior();
    done &= OMReactive::startBehavior();
    return done;
}

void KitchenRobotBuilder::initRelations() {
    itsMultiRobot.setItsElectricMotor(&itsElectricMotor);
}

void KitchenRobotBuilder::destroy() {
    itsElectricMotor.destroy();
    itsMultiRobot.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedKitchenRobotBuilder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsMultiRobot", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsMultiRobot);
    aomsRelations->addRelation("itsElectricMotor", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsElectricMotor);
}
//#]

IMPLEMENT_REACTIVE_META_SIMPLE_P(KitchenRobotBuilder, KitchenRobot, KitchenRobot, false, OMAnimatedKitchenRobotBuilder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: EXE\Host\KitchenRobotBuilder.cpp
*********************************************************************/
