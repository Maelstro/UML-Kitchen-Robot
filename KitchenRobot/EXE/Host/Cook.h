/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: Cook
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\Cook.h
*********************************************************************/

#ifndef Cook_H
#define Cook_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "KitchenRobot.h"
//## package KitchenRobot

//## actor Cook
class Cook {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCook;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Cook();
    
    //## auto_generated
    ~Cook();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCook : virtual public AOMInstance {
    DECLARE_META(Cook, OMAnimatedCook)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: EXE\Host\Cook.h
*********************************************************************/
