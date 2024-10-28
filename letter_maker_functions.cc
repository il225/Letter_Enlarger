#include <iostream>
#include "letters.h"

using namespace std;

void printPhraseBig(const string &str);
void printLine1(char ch);
void printLine2(char ch);
void printLine3(char ch);
void printLine4(char ch);
void printLine5(char ch);

void printPhraseBig(const string &str)
{
    /// printing lines separately
    for (size_t i = 0; i < str.length(); i++)
    {
        char ch = str.at(i);
        printLine1(ch);
    }
    for (size_t i = 0; i < str.length(); i++)
    {
        char ch = str.at(i);
        printLine2(ch);
    }
    for (size_t i = 0; i < str.length(); i++)
    {
        char ch = str.at(i);
        printLine3(ch);
    }
    for (size_t i = 0; i < str.length(); i++)
    {
        char ch = str.at(i);
        printLine4(ch);
    }
    for (size_t i = 0; i < str.length(); i++)
    {
        char ch = str.at(i);
        printLine5(ch);
    }
}

void printLine1(char ch)
{
    switch (toupper(ch))
    {
    case 'A':
        cout << "           ";
        break;
    case 'B':
        cout << "           ";
        break;
    case 'C':
        cout << "           ";
        break;
    case 'D':
        cout << "           ";
        break;
    case 'E':
        cout << "           ";
        break;
    case 'F':
        cout << "           ";
        break;
    case 'G':
        cout << "           ";
        break;
    case 'H':
        cout << "           ";
        break;
    case 'I':
        cout << "           ";
        break;
    case 'J':
        cout << "           ";
        break;
    case 'K':
        cout << "           ";
        break;
    case 'L':
        cout << "           ";
        break;
    case 'M':
        cout << "           ";
        break;
    case 'N':
        cout << "           ";
        break;
    case 'O':
        cout << "           ";
        break;
    case 'P':
        cout << "           ";
        break;
    case 'Q':
        cout << "           ";
        break;
    case 'R':
        cout << "           ";
        break;
    case 'S':
        cout << "           ";
        break;
    case 'T':
        cout << "           ";
        break;
    case 'U':
        cout << "           ";
        break;
    case 'V':
        cout << "           ";
        break;
    case 'W':
        cout << "           ";
        break;
    case 'X':
        cout << "           ";
        break;
    case 'Y':
        cout << "           ";
        break;
    case 'Z':
        cout << "           ";
        break;
    case ' ':
        cout << "           "; // input space between letters
        break;
    default:
        cout << "           "; // printing a dash
    }
    if (ch != ' ')
    {
        cout << "   "; // normal space between non-whitespace characters (kerning)
    }
}

void printLine2(char ch)
{
    switch (toupper(ch))
    {
    case 'A':
        cout << "           ";
        break;
    case 'B':
        cout << "           ";
        break;
    case 'C':
        cout << "           ";
        break;
    case 'D':
        cout << "           ";
        break;
    case 'E':
        cout << "           ";
        break;
    case 'F':
        cout << "           ";
        break;
    case 'G':
        cout << "           ";
        break;
    case 'H':
        cout << "           ";
        break;
    case 'I':
        cout << "           ";
        break;
    case 'J':
        cout << "           ";
        break;
    case 'K':
        cout << "           ";
        break;
    case 'L':
        cout << "           ";
        break;
    case 'M':
        cout << "           ";
        break;
    case 'N':
        cout << "           ";
        break;
    case 'O':
        cout << "           ";
        break;
    case 'P':
        cout << "           ";
        break;
    case 'Q':
        cout << "           ";
        break;
    case 'R':
        cout << "           ";
        break;
    case 'S':
        cout << "           ";
        break;
    case 'T':
        cout << "           ";
        break;
    case 'U':
        cout << "           ";
        break;
    case 'V':
        cout << "           ";
        break;
    case 'W':
        cout << "           ";
        break;
    case 'X':
        cout << "           ";
        break;
    case 'Y':
        cout << "           ";
        break;
    case 'Z':
        cout << "           ";
        break;
    case ' ':
        cout << "           "; // input space between letters
        break;
    default:
        cout << "           "; // printing a dash
    }
    if (ch != ' ')
    {
        cout << "   "; // normal space between non-whitespace characters (kerning)
    }
}

void printLine3(char ch)
{
    switch (toupper(ch))
    {
    case 'A':
        cout << "           ";
        break;
    case 'B':
        cout << "           ";
        break;
    case 'C':
        cout << "           ";
        break;
    case 'D':
        cout << "           ";
        break;
    case 'E':
        cout << "           ";
        break;
    case 'F':
        cout << "           ";
        break;
    case 'G':
        cout << "           ";
        break;
    case 'H':
        cout << "           ";
        break;
    case 'I':
        cout << "           ";
        break;
    case 'J':
        cout << "           ";
        break;
    case 'K':
        cout << "           ";
        break;
    case 'L':
        cout << "           ";
        break;
    case 'M':
        cout << "           ";
        break;
    case 'N':
        cout << "           ";
        break;
    case 'O':
        cout << "           ";
        break;
    case 'P':
        cout << "           ";
        break;
    case 'Q':
        cout << "           ";
        break;
    case 'R':
        cout << "           ";
        break;
    case 'S':
        cout << "           ";
        break;
    case 'T':
        cout << "           ";
        break;
    case 'U':
        cout << "           ";
        break;
    case 'V':
        cout << "           ";
        break;
    case 'W':
        cout << "           ";
        break;
    case 'X':
        cout << "           ";
        break;
    case 'Y':
        cout << "           ";
        break;
    case 'Z':
        cout << "           ";
        break;
    case ' ':
        cout << "           "; // input space between letters
        break;
    default:
        cout << "           "; // printing a dash
    }
    if (ch != ' ')
    {
        cout << "   "; // normal space between non-whitespace characters (kerning)
    }
}

void printLine4(char ch)
{
    switch (toupper(ch))
    {
    case 'A':
        cout << "           ";
        break;
    case 'B':
        cout << "           ";
        break;
    case 'C':
        cout << "           ";
        break;
    case 'D':
        cout << "           ";
        break;
    case 'E':
        cout << "           ";
        break;
    case 'F':
        cout << "           ";
        break;
    case 'G':
        cout << "           ";
        break;
    case 'H':
        cout << "           ";
        break;
    case 'I':
        cout << "           ";
        break;
    case 'J':
        cout << "           ";
        break;
    case 'K':
        cout << "           ";
        break;
    case 'L':
        cout << "           ";
        break;
    case 'M':
        cout << "           ";
        break;
    case 'N':
        cout << "           ";
        break;
    case 'O':
        cout << "           ";
        break;
    case 'P':
        cout << "           ";
        break;
    case 'Q':
        cout << "           ";
        break;
    case 'R':
        cout << "           ";
        break;
    case 'S':
        cout << "           ";
        break;
    case 'T':
        cout << "           ";
        break;
    case 'U':
        cout << "           ";
        break;
    case 'V':
        cout << "           ";
        break;
    case 'W':
        cout << "           ";
        break;
    case 'X':
        cout << "           ";
        break;
    case 'Y':
        cout << "           ";
        break;
    case 'Z':
        cout << "           ";
        break;
    case ' ':
        cout << "           "; // input space between letters
        break;
    default:
        cout << "           "; // printing a dash
    }
    if (ch != ' ')
    {
        cout << "   "; // normal space between non-whitespace characters (kerning)
    }
}

void printLine5(char ch)
{
    switch (toupper(ch))
    {
    case 'A':
        cout << "           ";
        break;
    case 'B':
        cout << "           ";
        break;
    case 'C':
        cout << "           ";
        break;
    case 'D':
        cout << "           ";
        break;
    case 'E':
        cout << "           ";
        break;
    case 'F':
        cout << "           ";
        break;
    case 'G':
        cout << "           ";
        break;
    case 'H':
        cout << "           ";
        break;
    case 'I':
        cout << "           ";
        break;
    case 'J':
        cout << "           ";
        break;
    case 'K':
        cout << "           ";
        break;
    case 'L':
        cout << "           ";
        break;
    case 'M':
        cout << "           ";
        break;
    case 'N':
        cout << "           ";
        break;
    case 'O':
        cout << "           ";
        break;
    case 'P':
        cout << "           ";
        break;
    case 'Q':
        cout << "           ";
        break;
    case 'R':
        cout << "           ";
        break;
    case 'S':
        cout << "           ";
        break;
    case 'T':
        cout << "           ";
        break;
    case 'U':
        cout << "           ";
        break;
    case 'V':
        cout << "           ";
        break;
    case 'W':
        cout << "           ";
        break;
    case 'X':
        cout << "           ";
        break;
    case 'Y':
        cout << "           ";
        break;
    case 'Z':
        cout << "           ";
        break;
    case ' ':
        cout << "           "; // input space between letters
        break;
    default:
        cout << "           "; // printing a dash
    }
    if (ch != ' ')
    {
        cout << "   "; // normal space between non-whitespace characters (kerning)
    }
}
