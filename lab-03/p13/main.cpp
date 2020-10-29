#include <iostream>
#include <string>

using namespace std;

bool between(int first, int last, int v);

int main()
{
    int pKing, pQueen;
    int pNewQueen;

    while (cin >> pKing >> pQueen >> pNewQueen) // 17 17 49    17 49 56     17 49 9
    {

        int xKing = pKing / 8; // 2  2   2
        int yKing = pKing % 8; // 1  1   1

        int xQueen = pQueen / 8; // 2   6    6
        int yQueen = pQueen % 8; // 1   1    1

        int xNew = pNewQueen / 8; // 6    7    1
        int yNew = pNewQueen % 8; // 1    0    1

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

            if ((xNew == xQueen && xNew == xKing && between(yQueen, yNew, yKing)) || (yNew == yQueen && yNew == yKing && between(xQueen, xNew, xKing)))
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

bool between(int first, int last, int v)
{
    return (first < last ? v >= first && v <= last : v >= last && v <= first);
}