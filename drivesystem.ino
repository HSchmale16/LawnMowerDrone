#include <Stepper.h>
#include "drivesystem.h"

DriveSystem::DriveSystem(int fwd, int rev, int steps, int s1, int s2, int s3, int s4){
    m_fwdpin   = fwd;
    m_revpin   = rev;
    m_step     = new Stepper(steps, s1, s2, s3, s4);

    pinMode(m_fwdpin, OUTPUT);
    pinMode(m_revpin, OUTPUT);
    
    digitalWrite(m_fwdpin, LOW);
    digitalWrite(m_revpin, LOW);
}

DriveSystem::~DriveSystem(){
    delete m_step;
}

void DriveSystem::fwd(){
    digitalWrite(m_revpin, LOW);
    digitalWrite(m_fwdpin, HIGH);
}

void DriveSystem::fwd(int ms){
    digitalWrite(m_revpin, LOW);
    digitalWrite(m_fwdpin, HIGH);
    delay(ms);
    digitalWrite(m_fwdpin, LOW);
}

void DriveSystem::rev(){
    digitalWrite(m_fwdpin, LOW);
    digitalWrite(m_revpin, HIGH);
}

void DriveSystem::rev(int ms){
    digitalWrite(m_fwdpin, LOW);
    digitalWrite(m_revpin, HIGH);
    delay(ms);
    digitalWrite(m_revpin, LOW);
}

void DriveSystem::turnLeft(){
    m_step->step(-400);
}
