#include <iostream>
#include "letters.h"

using namespace std;

///@brief prints the phrase in large ascii
void printPhraseBig(const string &str);

///@brief prints line of characters
///@param line from index 0 to index 5
void printLine(char ch, int line);


void printPhraseBig(const string &str) {
  int current_line = 0;

  while(current_line < 5) { // for rows 0 to 4??
    for (size_t i = 0; i < str.length(); i++) {
      char ch = str.at(i);
      if(i == str.length()-1) {
          printLine(ch, current_line);
          cout << endl;
          current_line++;
      }
      else {
          printLine(ch, current_line);
      }
    }
  }
}

void printLine(char ch, int line) {   
    switch (toupper(ch)) {
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
        case '-':
            cout << endash[line];
            break;
        // this part breaks because em dash is a wide character
        // need to refactor if i really want to make every single easy character, or add more wide char
        // case '—':
        //     cout << endash[line];
        //     break;
        default:
            cout << endash[line];
  }

  if (ch != ' ') { // normal space between non-whitespace characters (kerning)
      cout << "   ";
  }
}
