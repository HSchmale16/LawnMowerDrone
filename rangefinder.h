#ifndef RANGEFINDER_H_INC
#define RANGEFINDER_H_INC

class RangeFinder{
private:
    float m_dist;
    int   m_time;
    int   m_echoPin;
    int   m_recvPin;   
public:
    RangeFinder(int echo, int reciv);

    float getDist();
};

#endif // RANGEFINDER_H_INC
