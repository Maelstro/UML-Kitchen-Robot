/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: Serviceman
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\Serviceman.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Serviceman.h"
//#[ ignore
#define KitchenRobot_Serviceman_Serviceman_SERIALIZE OM_NO_OP
//#]

//## package KitchenRobot

//## actor Serviceman
Serviceman::Serviceman() {
    NOTIFY_CONSTRUCTOR(Serviceman, Serviceman(), 0, KitchenRobot_Serviceman_Serviceman_SERIALIZE);
}

Serviceman::~Serviceman() {
    NOTIFY_DESTRUCTOR(~Serviceman, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedServiceman::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Serviceman, KitchenRobot, KitchenRobot, false, OMAnimatedServiceman)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: EXE\Host\Serviceman.cpp
*********************************************************************/
