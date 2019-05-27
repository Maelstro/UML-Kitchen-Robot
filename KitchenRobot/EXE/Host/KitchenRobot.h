/*********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: KitchenRobot
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\KitchenRobot.h
*********************************************************************/

#ifndef KitchenRobot_H
#define KitchenRobot_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class ElectricMotor;

//## auto_generated
class KitchenRobotBuilder;

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
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevOpen;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evOpen();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevOpen : virtual public AOMEvent {
    DECLARE_META_EVENT(evOpen)
};
//#]
#endif // _OMINSTRUMENT

//## event evClose()
class evClose : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevClose;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evClose();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevClose : virtual public AOMEvent {
    DECLARE_META_EVENT(evClose)
};
//#]
#endif // _OMINSTRUMENT

//## event evStart()
class evStart : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStart;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStart();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStart : virtual public AOMEvent {
    DECLARE_META_EVENT(evStart)
};
//#]
#endif // _OMINSTRUMENT

//## event evStop()
class evStop : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStop;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStop();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStop : virtual public AOMEvent {
    DECLARE_META_EVENT(evStop)
};
//#]
#endif // _OMINSTRUMENT

//## event evService()
class evService : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevService;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evService();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevService : virtual public AOMEvent {
    DECLARE_META_EVENT(evService)
};
//#]
#endif // _OMINSTRUMENT

//## event evMix()
class evMix : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMix;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMix();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMix : virtual public AOMEvent {
    DECLARE_META_EVENT(evMix)
};
//#]
#endif // _OMINSTRUMENT

//## event evStir()
class evStir : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevStir;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evStir();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevStir : virtual public AOMEvent {
    DECLARE_META_EVENT(evStir)
};
//#]
#endif // _OMINSTRUMENT

//## event evBlend()
class evBlend : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevBlend;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evBlend();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevBlend : virtual public AOMEvent {
    DECLARE_META_EVENT(evBlend)
};
//#]
#endif // _OMINSTRUMENT

//## event evMotorOff()
class evMotorOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMotorOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMotorOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMotorOff : virtual public AOMEvent {
    DECLARE_META_EVENT(evMotorOff)
};
//#]
#endif // _OMINSTRUMENT

//## event evMotorOn()
class evMotorOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevMotorOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evMotorOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevMotorOn : virtual public AOMEvent {
    DECLARE_META_EVENT(evMotorOn)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: EXE\Host\KitchenRobot.h
*********************************************************************/
