/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: Serviceman
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\Serviceman.h
*********************************************************************/

#ifndef Serviceman_H
#define Serviceman_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "KitchenRobot.h"
//## package KitchenRobot

//## actor Serviceman
class Serviceman {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedServiceman;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Serviceman();
    
    //## auto_generated
    ~Serviceman();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedServiceman : virtual public AOMInstance {
    DECLARE_META(Serviceman, OMAnimatedServiceman)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: EXE\Host\Serviceman.h
*********************************************************************/
