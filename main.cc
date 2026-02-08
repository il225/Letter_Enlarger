#include <iostream>
#include "letter_functions.h"

using namespace std;

int main(int argc, char const *argv[])
{
    string phrase;

    cout << "What do you want to print?" << endl;
    getline(cin, phrase);
    printPhraseBig(phrase);

    return 0;
}
