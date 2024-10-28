#include <iostream>
using namespace std;

void getWord(string str);

string getLine1(char ch); // get one line at a time
string getLine2(char ch);
string getLine3(char ch);
string getLine4(char ch);
string getLine5(char ch);

string getA1(); // lines of A
string getA2();
string getA3();
string getA4();
string getA5();

string getB1(); // lines of B
string getB2();
string getB3();
string getB4();
string getB5();

string getC1(); // lines of C
string getC2();
string getC3();
string getC4();
string getC5();

string getD1(); // lines of D
string getD2();
string getD3();
string getD4();
string getD5();

string getE1(); // lines of E
string getE2();
string getE3();
string getE4();
string getE5();

string getF1(); // lines of F
string getF2();
string getF3();
string getF4();
string getF5();

string getG1(); // lines of G
string getG2();
string getG3();
string getG4();
string getG5();

string getH1(); // lines of H
string getH2();
string getH3();
string getH4();
string getH5();

string getI1(); // lines of I
string getI2();
string getI3();
string getI4();
string getI5();

string getJ1(); // lines of J
string getJ2();
string getJ3();
string getJ4();
string getJ5();

string getK1(); // lines of K
string getK2();
string getK3();
string getK4();
string getK5();

string getL1(); // lines of L
string getL2();
string getL3();
string getL4();
string getL5();

string getM1(); // lines of M
string getM2();
string getM3();
string getM4();
string getM5();
string getN1();

string getN2(); // lines of N
string getN3();
string getN4();
string getN5();

string getO1(); // lines of O
string getO2();
string getO3();
string getO4();
string getO5();

string getP1(); // lines of P
string getP2();
string getP3();
string getP4();
string getP5();

string getQ1(); // lines of Q
string getQ2();
string getQ3();
string getQ4();
string getQ5();

string getR1(); // lines of R
string getR2();
string getR3();
string getR4();
string getR5();

string getS1(); // lines of S
string getS2();
string getS3();
string getS4();
string getS5();

string getT1(); // lines of T
string getT2();
string getT3();
string getT4();
string getT5();

string getU1(); // lines of U
string getU2();
string getU3();
string getU4();
string getU5();

string getV1(); // lines of V
string getV2();
string getV3();
string getV4();
string getV5();

string getW1(); // lines of W
string getW2();
string getW3();
string getW4();
string getW5();

string getX1(); // lines of X
string getX2();
string getX3();
string getX4();
string getX5();

string getY1(); // lines of Y
string getY2();
string getY3();
string getY4();
string getY5();

string getZ1(); // lines of Z
string getZ2();
string getZ3();
string getZ4();
string getZ5();

string getA1() { return "    aaa    "; }
string getA2() { return "   aa aa   "; }
string getA3() { return "  aa   aa  "; }
string getA4() { return " aaaaaaaaa "; }
string getA5() { return "aaa     aaa"; }

string getB1() { return "bbbbbbbbbb "; }
string getB2() { return "bb       bb"; }
string getB3() { return "bbbbbbbbb  "; }
string getB4() { return "bb       bb"; }
string getB5() { return "bbbbbbbbbb "; }

string getC1() { return " ccccccccc "; }
string getC2() { return "ccc     ccc"; }
string getC3() { return "cc         "; }
string getC4() { return "ccc     ccc"; }
string getC5() { return " ccccccccc "; }

string getD1() { return "ddddddddd  "; }
string getD2() { return " dd     dd "; }
string getD3() { return " dd      dd"; }
string getD4() { return " dd     dd "; }
string getD5() { return "ddddddddd  "; }

string getE1() { return "eeeeeeeeeee"; }
string getE2() { return "ee         "; }
string getE3() { return "eeeeeee    "; }
string getE4() { return "ee         "; }
string getE5() { return "eeeeeeeeeee"; }

string getF1() { return "fffffffffff"; }
string getF2() { return "ff         "; }
string getF3() { return "fffffff    "; }
string getF4() { return "ff         "; }
string getF5() { return "ff         "; }

string getG1() { return " ggggggggg "; }
string getG2() { return "ggg        "; }
string getG3() { return "gg     gggg"; }
string getG4() { return "ggg      gg"; }
string getG5() { return " ggggggggg "; }

string getH1() { return "hh       hh"; }
string getH2() { return "hh       hh"; }
string getH3() { return "hhhhhhhhhhh"; }
string getH4() { return "hh       hh"; }
string getH5() { return "hh       hh"; }

string getI1() { return "iiiiiiiiiii"; }
string getI2() { return "    iii    "; }
string getI3() { return "    iii    "; }
string getI4() { return "    iii    "; }
string getI5() { return "iiiiiiiiiii"; }

string getJ1() { return "  jjjjjjjjj"; }
string getJ2() { return "     jjj   "; }
string getJ3() { return "     jjj   "; }
string getJ4() { return "jj   jjj   "; }
string getJ5() { return " jjjjjj    "; }

string getK1() { return "kk      kkk"; }
string getK2() { return "kk    kkk  "; }
string getK3() { return "kkkkkkk    "; }
string getK4() { return "kk    kkk  "; }
string getK5() { return "kk      kkk"; }

string getL1() { return "lll        "; }
string getL2() { return "lll        "; }
string getL3() { return "lll        "; }
string getL4() { return "lll        "; }
string getL5() { return "lllllllllll"; }

string getM1() { return "mmm     mmm"; }
string getM2() { return "mmmmm mmmmm"; }
string getM3() { return "mm mmmmm mm"; }
string getM4() { return "mm  mmm  mm"; }
string getM5() { return "mm   m   mm"; }

string getN1() { return "nnn     nnn"; }
string getN2() { return "nnnnn   nnn"; }
string getN3() { return "nnn nnn nnn"; }
string getN4() { return "nnn   nnnnn"; }
string getN5() { return "nnn     nnn"; }

string getO1() { return " ooooooooo "; }
string getO2() { return "oooo   oooo"; }
string getO3() { return "ooo     ooo"; }
string getO4() { return "oooo   oooo"; }
string getO5() { return " ooooooooo "; }

string getP1() { return "pppppppppp "; }
string getP2() { return "ppp     ppp"; }
string getP3() { return "pppppppppp "; }
string getP4() { return "ppp        "; }
string getP5() { return "ppp        "; }

string getQ1() { return " qqqqqqqqq "; }
string getQ2() { return "qqqq   qqqq"; }
string getQ3() { return "qqq     qqq"; }
string getQ4() { return "qqqq   qq  "; }
string getQ5() { return " qqqqqq  qq"; }

string getR1() { return "rrrrrrrrr  "; }
string getR2() { return "rrr   rrrr "; }
string getR3() { return "rrrrrrrrr  "; }
string getR4() { return "rrr    rrr "; }
string getR5() { return "rrr     rrr"; }

string getS1() { return " ssssssssss"; }
string getS2() { return "ss         "; }
string getS3() { return " sssssssss "; }
string getS4() { return "         ss"; }
string getS5() { return "ssssssssss "; }

string getT1() { return "ttttttttttt"; }
string getT2() { return "    ttt    "; }
string getT3() { return "    ttt    "; }
string getT4() { return "    ttt    "; }
string getT5() { return "    ttt    "; }

string getU1() { return "uuu     uuu"; }
string getU2() { return "uuu     uuu"; }
string getU3() { return "uuu     uuu"; }
string getU4() { return "uuuu   uuuu"; }
string getU5() { return " uuuuuuuuu "; }

string getV1() { return "vv       vv"; }
string getV2() { return " vv     vv "; }
string getV3() { return "  vv   vv  "; }
string getV4() { return "   vv vv   "; }
string getV5() { return "    vvv    "; }

string getW1() { return "ww       ww"; }
string getW2() { return "ww       ww"; }
string getW3() { return "ww   w   ww"; }
string getW4() { return "www www www"; }
string getW5() { return " www   www "; }

string getX1() { return "xxx     xxx"; }
string getX2() { return "  xxx xxx  "; }
string getX3() { return "   xxxx    "; }
string getX4() { return "  xxx xxx  "; }
string getX5() { return "xxx     xxx"; }

string getY1() { return "yyy     yyy"; }
string getY2() { return "  yy   yy  "; }
string getY3() { return "    yyy    "; }
string getY4() { return "    yyy    "; }
string getY5() { return "    yyy    "; }

string getZ1() { return "zzzzzzzzzzz"; }
string getZ2() { return "       zzz "; }
string getZ3() { return "    zzz    "; }
string getZ4() { return " zzz       "; }
string getZ5() { return "zzzzzzzzzzz"; }

void getWord(string str)
{
    string getLine1(char ch)
    {
        switch (toupper(ch))
        {
        case 'A':
            return getA1();
        case 'B':
            return getB1();
        case 'C':
            return getC1();
        case 'D':
            return getD1();
        case 'E':
            return getE1();
        case 'F':
            return getF1();
        case 'G':
            return getG1();
        case 'H':
            return getH1();
        case 'I':
            return getI1();
        case 'J':
            return getJ1();
        case 'K':
            return getK1();

        }
    }
    string getLine2(char ch)
    {
    }
    string getLine3(char ch);
    string getLine4(char ch);
    string getLine5(char ch);
}
