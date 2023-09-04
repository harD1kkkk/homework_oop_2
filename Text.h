#pragma once
#include <iostream>
using namespace std;
class Text
{
protected:
    string text;
public:
    Text(string text);
    virtual void displayText();
};