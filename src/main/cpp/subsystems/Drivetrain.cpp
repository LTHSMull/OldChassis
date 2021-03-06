// RobotBuilder Version: 3.1
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "subsystems/Drivetrain.h"
#include <frc/smartdashboard/SmartDashboard.h>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Drivetrain::Drivetrain(){
    SetName("Drivetrain");
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    SetSubsystem("Drivetrain");

 AddChild("Differential Drive 1", &m_differentialDrive1);
 m_differentialDrive1.SetSafetyEnabled(true);
m_differentialDrive1.SetExpiration(0.1);
m_differentialDrive1.SetMaxOutput(1.0);


 AddChild("RightSide", &m_rightSide);
 

 AddChild("RightBack", &m_rightBack);
 m_rightBack.SetInverted(false);

 AddChild("RightFront", &m_rightFront);
 m_rightFront.SetInverted(false);

 AddChild("LeftSide", &m_leftSide);
 

 AddChild("LeftBack", &m_leftBack);
 m_leftBack.SetInverted(true);

 AddChild("LeftFront", &m_leftFront);
 m_leftFront.SetInverted(true);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Drivetrain::Periodic() {
    // Put code here to be run every loop

}

void Drivetrain::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS


// Put methods for controlling this subsystem
// here. Call these from Commands.
