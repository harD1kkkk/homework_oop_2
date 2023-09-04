// zavd_74.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Text.h"
#include "GreatedTask.h"
#include "DeadLineTask.h"
#include "DailyTask.h"
using namespace std;
int main()
{
    Text* all[5];
    all[0] = new Text("Simple task");                
    all[1] = new GreatedTask("Important task");    
    all[2] = new DeadLineTask("Urgent task", 8, 12); 
    all[3] = new DailyTask("Daily task", 10, 30);    
    all[4] = new DailyTask("Daily task 1", 12, 0);

    cout << "To Do List:\n" << endl;

    for (int i = 0; i < 5; i++)
    {
        all[i]->displayText(); 
    }

    for (int i = 0; i < 5; i++)
    {
        delete all[i];
    }
}