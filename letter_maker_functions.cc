#include <iostream>
#include "letters.h"

using namespace std;

void printPhraseBig(const string &str);

///@brief prints line of characters
///@param line from 1 to 5
void printLine(char ch, int line);


void printPhraseBig(const string &str)
{
    /// printing lines separately
    for (size_t i = o; i < str.length(); i++)
    {
        char ch = str.at(i);
        printLine(ch, 1);
    }
  
}

void printLine(char ch, int line)
{
    line++; //real line value
    
    switch (toupper(ch))
    {
    case 'A':
        cout << A[line];
        break;
    case 'B':
        cout << B[line];
        break;
    case 'C':
        cout << C[line];
        break;
    case 'D':
        cout << D[line];
        break;
    case 'E':
        cout << E[line];
        break;
    case 'F':
        cout << F[line];
        break;
    case 'G':
        cout << G[line];
        break;
    case 'H':
        cout << H[line];
        break;
    case 'I':
        cout << I[line];
        break;
    case 'J':
        cout << J[line];
        break;
    case 'K':
        cout << K[line];
        break;
    case 'L':
        cout << L[line];
        break;
    case 'M':
        cout << M[line];
        break;
    case 'N':
        cout << N[line];
        break;
    case 'O':
        cout << O[line];
        break;
    case 'P':
        cout << P[line];
        break;
    case 'Q':
        cout << Q[line];
        break;
    case 'R':
        cout << R[line];
        break;
    case 'S':
        cout << S[line];
        break;
    case 'T':
        cout << T[line];
        break;
    case 'U':
        cout << U[line];
        break;
    case 'V':
        cout << V[line];
        break;
    case 'W':
        cout << W[line];
        break;
    case 'X':
        cout << X[line];
        break;
    case 'Y':
        cout << Y[line];
        break;
    case 'Z':
        cout << Z[line];
        break;
    case ' ':
        cout << space[line]; // input space between letters
        break;
    default:
        cout << endash[line]; // printing a dash
    }

    if (ch != ' ')
    {
        cout << "   "; // normal space between non-whitespace characters (kerning)
    }
}
