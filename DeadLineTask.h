#pragma once
#include "Text.h"

class DeadLineTask 
    : public Text
{
private:
    int day;    
    int month;  
public:
    DeadLineTask(string text, int day, int month);
    void displayText() override;
};

