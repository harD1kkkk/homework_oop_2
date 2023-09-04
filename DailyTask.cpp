#include "DailyTask.h"
DailyTask::DailyTask(string text, int hours, int minutes) : Text(text) {
    this->hours = hours;       
    this->minutes = minutes;   
}

void DailyTask::displayText() {
    cout << "Time: " << hours << ":" << minutes << " " << text << endl;
}
