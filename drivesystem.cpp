#include "drivesystem.h"
#include <arduino.h>

DriveSystem::DriveSystem(int servopin, int revpin, int fwdpin){
    m_servopin = servopin;
    m_fwdpin   = fwdpin;
    m_revpin   = revpin;

    pinMode(m_fwdpin, OUTPUT);
    pinMode(m_revpin, OUTPUT);
    
    digitalWrite(m_fwdpin, LOW);
    digitalWrite(m_revpin, LOW);
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
