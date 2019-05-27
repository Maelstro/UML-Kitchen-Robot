/********************************************************************
	Rhapsody	: 8.3.1 
	Login		: student
	Component	: EXE 
	Configuration 	: Host
	Model Element	: Host
//!	Generated Date	: Thu, 23, May 2019  
	File Path	: EXE\Host\MainEXE.cpp
*********************************************************************/

//## auto_generated
#include "MainEXE.h"
//## auto_generated
#include "KitchenRobotBuilder.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            KitchenRobotBuilder * p_KitchenRobotBuilder;
            p_KitchenRobotBuilder = new KitchenRobotBuilder;
            p_KitchenRobotBuilder->startBehavior();
            //#[ configuration EXE::Host 
            //#]
            OXF::start();
            delete p_KitchenRobotBuilder;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: EXE\Host\MainEXE.cpp
*********************************************************************/
