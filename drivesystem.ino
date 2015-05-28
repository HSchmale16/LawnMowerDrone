#include <Stepper.h>
#include "drivesystem.h"

DriveSystem::DriveSystem(int fwd, int rev, int s1, int s2, int s3, int s4){
    m_fwdpin   = fwd;
    m_revpin   = rev;

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

void DriveSystem::rev(){

}
