#ifndef DRONE_H_INC
#define DRONE_H_INC

#include <Stepper.h>

class DriveSystem{
private:
    int m_fwdpin;   //!< Pin to make motor go forwards
    int m_revpin;   //!< Pin to make motor go backwards
public:
    DriveSystem();
    DriveSystem(int rev, int fwd, int s1, int s2, int s3, int s4);

    void begin(int rev, int fwd, int s1, int s2, int s3, int s4);    
    void fwd();
    void fwd(int ms);
    void rev();
    void rev(int ms);
    void stop();
    void turnLeft();    //!< Point Wheels Left
    void turnCenter();  //!< Return Wheels to Center
    void turnRight();   //!< Point Wheels Right
};

#endif // DRONE_H_INC
