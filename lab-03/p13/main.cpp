#include <iostream>
#include <string>

using namespace std;

int main()
{
    int pKing, pQueen;
    int pNewQueen;

    while (cin >> pKing >> pQueen >> pNewQueen) // 17 17 49    17 49 56
    {

        int xKing = pKing / 8; // 2  2
        int yKing = pKing % 8; // 1  1

        int xQueen = pQueen / 8; // 2   6
        int yQueen = pQueen % 8; // 1   1

        int xNew = pNewQueen / 8; // 6    7
        int yNew = pNewQueen % 8; // 1    0

        if (pKing == pQueen)
        {
            cout << "Illegal state" << endl;
        }
        else if (xQueen != xNew && yQueen != yNew) // 6 != 6    1 != 0   (against Q move)
        {
            cout << "Illegal move" << endl;
        }
        else if (pQueen == pNewQueen) // 49 == 56
        {
            cout << "Illegal move" << endl;
        }
        else
        {

            if ((xNew == xQueen && xNew == xKing) || (yNew == yQueen && yNew == yKing))
            {
                cout << "Illegal move" << endl;
            }
            else if ((xKing == xNew && abs(yKing - yNew) == 1) || (yKing == yNew && abs(xKing - xNew) == 1))
            {
                cout << "Move not allowed" << endl;
            }
            else if ((pKing == 0 && pNewQueen == 9) || (pKing == 56 && pNewQueen == 49) || (pKing == 7 && pNewQueen == 14) || (pKing == 63 && pNewQueen == 54))
            {
                cout << "Stop" << endl;
            }
            else
            {
                cout << "Continue" << endl;
            }
        }
    }
}