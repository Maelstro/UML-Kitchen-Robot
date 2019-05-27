/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: Cook
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\Cook.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Cook.h"
//#[ ignore
#define KitchenRobot_Cook_Cook_SERIALIZE OM_NO_OP
//#]

//## package KitchenRobot

//## actor Cook
Cook::Cook() {
    NOTIFY_CONSTRUCTOR(Cook, Cook(), 0, KitchenRobot_Cook_Cook_SERIALIZE);
}

Cook::~Cook() {
    NOTIFY_DESTRUCTOR(~Cook, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCook::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Cook, KitchenRobot, KitchenRobot, false, OMAnimatedCook)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: EXE\Host\Cook.cpp
*********************************************************************/
