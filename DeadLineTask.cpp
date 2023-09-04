#include "DeadLineTask.h"

DeadLineTask::DeadLineTask(string text, int day, int month) : Text(text) {
    this->day = day;       
    this->month = month;   
}

void DeadLineTask::displayText() {
    cout << "Date: " << month << "." << day << " " << text << endl;
}