#include <iostream>
#include "letter_functions.h"

using namespace std;

int main(int argc, char const *argv[])
{
    bool rerun = true;
    char ch;
    string phrase;

    while (rerun == true)
    {
        cout << "What do you want to print?" << endl;
        getline(cin, phrase);
        printPhraseBig(phrase);

        cout << "Rerun? (Y/N)" << endl;
        cin >> ch;
        if (toupper(ch) != 'Y')
        {
            rerun = false;
        }
    }

    return 0;
}
