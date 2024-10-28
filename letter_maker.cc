#include <iostream>
#include "letter_maker_functions.cc"

using namespace std;

int main(int argc, char const *argv[])
{
    bool rerun = true;
    char ch;
    string phrase;

    do
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

    } while (rerun == true);

    return 0;
}