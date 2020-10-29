#include <iostream>
#include <string>

using namespace std;

int main()
{
    int pKing, pQueen;
    int pNewQueen;
    while (cin >> pKing >> pQueen >> pNewQueen)
    {

        int xQueen = pQueen / 8;
        int yQueen = pQueen % 8;

        int xKing = pKing / 8;
        int yKing = pKing % 8;

        int xN = pNewQueen / 8;
        int yN = pNewQueen % 8;

        if (pKing == pQueen)
        {
            cout << "Illegal state" << endl;
        }
        else if (xQueen != xN && yQueen != yN)
        {
            cout << "Illegal move" << endl;
        }
        else if (pQueen == pNewQueen)
        {
            cout << "Illegal move" << endl;
        }
    }
}