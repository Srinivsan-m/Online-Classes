#include <iostream>
using namespace std;

int main()
{
    // using '\\' prints '\' followed by the text in front of it
    cout << "** Escape Sequences **" << endl;
    cout << "New \\n \nline \n\n";
    cout << "Tab \\t \t Spacing \n\n";
    cout << "Backspace\b \\b \n\n";
    cout << "Carriage Return\rreturn \\r\n\n";
    // for more info refer : https://en.cppreference.com/w/cpp/language/escape
}