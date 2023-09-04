#pragma once
#include "Text.h"

class DailyTask 
    : public Text
{
private:
    int hours;      
    int minutes;    
public:
    DailyTask(string text, int hours, int minutes);
    void displayText() override;
};
