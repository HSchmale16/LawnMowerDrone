#ifndef DRONE_H_INC
#define DRONE_H_INC

#include <Servo.h>

class DriveSystem{
private:
    int m_fwdpin;
    int m_revpin;   //!< Make the motor go fwd.
    int m_servopin; //!< The Servo Control Pin
public:
    DriveSystem(int servopin, int revpin, int fwdpin);
    
    void fwd();
    void fwd(int ms);
    void rev();
    void rev(int ms);
    void stop();
    void turnLeft();
    void turnRight();
};

#endif // DRONE_H_INC
