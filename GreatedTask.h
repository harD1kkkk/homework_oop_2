#pragma once
#include "Text.h"

class GreatedTask 
    : public Text
{
public:
    GreatedTask(string text);
    void displayText() override;
};