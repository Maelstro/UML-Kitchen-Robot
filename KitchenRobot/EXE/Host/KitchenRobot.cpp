/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: KitchenRobot
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\KitchenRobot.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "KitchenRobot.h"
//## auto_generated
#include "ElectricMotor.h"
//## auto_generated
#include "KitchenRobotBuilder.h"
//## auto_generated
#include "MultiRobot.h"
//#[ ignore
#define evOpen_SERIALIZE OM_NO_OP

#define evOpen_UNSERIALIZE OM_NO_OP

#define evOpen_CONSTRUCTOR evOpen()

#define evClose_SERIALIZE OM_NO_OP

#define evClose_UNSERIALIZE OM_NO_OP

#define evClose_CONSTRUCTOR evClose()

#define evStart_SERIALIZE OM_NO_OP

#define evStart_UNSERIALIZE OM_NO_OP

#define evStart_CONSTRUCTOR evStart()

#define evStop_SERIALIZE OM_NO_OP

#define evStop_UNSERIALIZE OM_NO_OP

#define evStop_CONSTRUCTOR evStop()

#define evService_SERIALIZE OM_NO_OP

#define evService_UNSERIALIZE OM_NO_OP

#define evService_CONSTRUCTOR evService()

#define evMix_SERIALIZE OM_NO_OP

#define evMix_UNSERIALIZE OM_NO_OP

#define evMix_CONSTRUCTOR evMix()

#define evStir_SERIALIZE OM_NO_OP

#define evStir_UNSERIALIZE OM_NO_OP

#define evStir_CONSTRUCTOR evStir()

#define evBlend_SERIALIZE OM_NO_OP

#define evBlend_UNSERIALIZE OM_NO_OP

#define evBlend_CONSTRUCTOR evBlend()

#define evMotorOff_SERIALIZE OM_NO_OP

#define evMotorOff_UNSERIALIZE OM_NO_OP

#define evMotorOff_CONSTRUCTOR evMotorOff()

#define evMotorOn_SERIALIZE OM_NO_OP

#define evMotorOn_UNSERIALIZE OM_NO_OP

#define evMotorOn_CONSTRUCTOR evMotorOn()
//#]

//## package KitchenRobot


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(KitchenRobot, KitchenRobot)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event evOpen()
evOpen::evOpen() {
    NOTIFY_EVENT_CONSTRUCTOR(evOpen)
    setId(evOpen_KitchenRobot_id);
}

bool evOpen::isTypeOf(const short id) const {
    return (evOpen_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evOpen, KitchenRobot, KitchenRobot, evOpen())

//## event evClose()
evClose::evClose() {
    NOTIFY_EVENT_CONSTRUCTOR(evClose)
    setId(evClose_KitchenRobot_id);
}

bool evClose::isTypeOf(const short id) const {
    return (evClose_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evClose, KitchenRobot, KitchenRobot, evClose())

//## event evStart()
evStart::evStart() {
    NOTIFY_EVENT_CONSTRUCTOR(evStart)
    setId(evStart_KitchenRobot_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evStart, KitchenRobot, KitchenRobot, evStart())

//## event evStop()
evStop::evStop() {
    NOTIFY_EVENT_CONSTRUCTOR(evStop)
    setId(evStop_KitchenRobot_id);
}

bool evStop::isTypeOf(const short id) const {
    return (evStop_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evStop, KitchenRobot, KitchenRobot, evStop())

//## event evService()
evService::evService() {
    NOTIFY_EVENT_CONSTRUCTOR(evService)
    setId(evService_KitchenRobot_id);
}

bool evService::isTypeOf(const short id) const {
    return (evService_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evService, KitchenRobot, KitchenRobot, evService())

//## event evMix()
evMix::evMix() {
    NOTIFY_EVENT_CONSTRUCTOR(evMix)
    setId(evMix_KitchenRobot_id);
}

bool evMix::isTypeOf(const short id) const {
    return (evMix_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evMix, KitchenRobot, KitchenRobot, evMix())

//## event evStir()
evStir::evStir() {
    NOTIFY_EVENT_CONSTRUCTOR(evStir)
    setId(evStir_KitchenRobot_id);
}

bool evStir::isTypeOf(const short id) const {
    return (evStir_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evStir, KitchenRobot, KitchenRobot, evStir())

//## event evBlend()
evBlend::evBlend() {
    NOTIFY_EVENT_CONSTRUCTOR(evBlend)
    setId(evBlend_KitchenRobot_id);
}

bool evBlend::isTypeOf(const short id) const {
    return (evBlend_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evBlend, KitchenRobot, KitchenRobot, evBlend())

//## event evMotorOff()
evMotorOff::evMotorOff() {
    NOTIFY_EVENT_CONSTRUCTOR(evMotorOff)
    setId(evMotorOff_KitchenRobot_id);
}

bool evMotorOff::isTypeOf(const short id) const {
    return (evMotorOff_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evMotorOff, KitchenRobot, KitchenRobot, evMotorOff())

//## event evMotorOn()
evMotorOn::evMotorOn() {
    NOTIFY_EVENT_CONSTRUCTOR(evMotorOn)
    setId(evMotorOn_KitchenRobot_id);
}

bool evMotorOn::isTypeOf(const short id) const {
    return (evMotorOn_KitchenRobot_id==id);
}

IMPLEMENT_META_EVENT_P(evMotorOn, KitchenRobot, KitchenRobot, evMotorOn())

/*********************************************************************
	File Path	: EXE\Host\KitchenRobot.cpp
*********************************************************************/
