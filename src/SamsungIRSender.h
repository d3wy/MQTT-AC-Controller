#include <IRremoteESP8266.h>
#include <IRsend.h>

#ifndef IR_SAMSUNG_SENDER
#define IR_SAMSUNG_SENDER

class SamsungIRSender{
    public:
    void begin();
    void sendOn();
    void sendOff();
    
};

#endif