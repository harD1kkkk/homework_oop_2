#include "GreatedTask.h"
GreatedTask::GreatedTask(string text) : Text(text) {}

void GreatedTask::displayText() {
    cout << "!!! " << text << endl;
}