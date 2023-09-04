#include "Text.h"
Text::Text(string text) {
    this->text = text;
}

void Text::displayText() {
    cout << text << endl;
}
