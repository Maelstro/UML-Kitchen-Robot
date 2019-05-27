/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: KitchenRobot
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: DefaultComponent\DefaultConfig\KitchenRobot.cpp
*********************************************************************/

//## auto_generated
#include "KitchenRobot.h"
//## auto_generated
#include "ElectricMotor.h"
//## auto_generated
#include "MultiRobot.h"
//## package KitchenRobot



//## event evOpen()
evOpen::evOpen() {
    setId(evOpen_KitchenRobot_id);
}

bool evOpen::isTypeOf(const short id) const {
    return (evOpen_KitchenRobot_id==id);
}

//## event evClose()
evClose::evClose() {
    setId(evClose_KitchenRobot_id);
}

bool evClose::isTypeOf(const short id) const {
    return (evClose_KitchenRobot_id==id);
}

//## event evStart()
evStart::evStart() {
    setId(evStart_KitchenRobot_id);
}

bool evStart::isTypeOf(const short id) const {
    return (evStart_KitchenRobot_id==id);
}

//## event evStop()
evStop::evStop() {
    setId(evStop_KitchenRobot_id);
}

bool evStop::isTypeOf(const short id) const {
    return (evStop_KitchenRobot_id==id);
}

//## event evService()
evService::evService() {
    setId(evService_KitchenRobot_id);
}

bool evService::isTypeOf(const short id) const {
    return (evService_KitchenRobot_id==id);
}

//## event evMix()
evMix::evMix() {
    setId(evMix_KitchenRobot_id);
}

bool evMix::isTypeOf(const short id) const {
    return (evMix_KitchenRobot_id==id);
}

//## event evStir()
evStir::evStir() {
    setId(evStir_KitchenRobot_id);
}

bool evStir::isTypeOf(const short id) const {
    return (evStir_KitchenRobot_id==id);
}

//## event evBlend()
evBlend::evBlend() {
    setId(evBlend_KitchenRobot_id);
}

bool evBlend::isTypeOf(const short id) const {
    return (evBlend_KitchenRobot_id==id);
}

//## event evMotorOff()
evMotorOff::evMotorOff() {
    setId(evMotorOff_KitchenRobot_id);
}

bool evMotorOff::isTypeOf(const short id) const {
    return (evMotorOff_KitchenRobot_id==id);
}

//## event evMotorOn()
evMotorOn::evMotorOn() {
    setId(evMotorOn_KitchenRobot_id);
}

bool evMotorOn::isTypeOf(const short id) const {
    return (evMotorOn_KitchenRobot_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\KitchenRobot.cpp
*********************************************************************/
