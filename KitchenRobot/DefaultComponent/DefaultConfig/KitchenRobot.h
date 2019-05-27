/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: KitchenRobot
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: DefaultComponent\DefaultConfig\KitchenRobot.h
*********************************************************************/

#ifndef KitchenRobot_H
#define KitchenRobot_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class ElectricMotor;

//## auto_generated
class MultiRobot;

//#[ ignore
#define evOpen_KitchenRobot_id 6601

#define evClose_KitchenRobot_id 6602

#define evStart_KitchenRobot_id 6603

#define evStop_KitchenRobot_id 6604

#define evService_KitchenRobot_id 6605

#define evMix_KitchenRobot_id 6606

#define evStir_KitchenRobot_id 6607

#define evBlend_KitchenRobot_id 6608

#define evMotorOff_KitchenRobot_id 6609

#define evMotorOn_KitchenRobot_id 6610
//#]

//## package KitchenRobot



//## event evOpen()
class evOpen : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evOpen();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evClose()
class evClose : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evClose();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evStart()
class evStart : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evStop()
class evStop : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStop();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evService()
class evService : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evService();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evMix()
class evMix : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evMix();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evStir()
class evStir : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evStir();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evBlend()
class evBlend : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evBlend();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evMotorOff()
class evMotorOff : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evMotorOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evMotorOn()
class evMotorOn : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evMotorOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\KitchenRobot.h
*********************************************************************/
