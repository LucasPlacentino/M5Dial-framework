/**
 * M5Dial-framework
 * Basic components framework for M5Dial projects
 *
 * Apache2.0 License
 * by Lucas Placentino
 */

#include <M5Dial.h>
#include "SECRETS.h"

int wifiSetup()
{
    
}

void buzzerSelect(int duration=20)
{
    M5Dial.Speaker.tone(2000, duration);
}

void buzzerClick(int type)
{
    switch(type)
    {
        case 1:
            M5Dial.Speaker.tone(6000, 20);
            break;
        case default:
            M5Dial.Speaker.tone(7000, 20);
            break;
    }
}

void buzzerError(int type, int duration=20)
{
    switch(type)
    {
        case 1:
            M5Dial.Speaker.tone(860, duration);
            M5Dial.Speaker.tone(800, duration);
            break;
        case 2:
            //todo
            break;
        default:
            M5Dial.Speaker.tone(800, duration);
            break;
    }
}

void setup(void)
{
    //setup
}

void loop(void)
{
    //loop
}
