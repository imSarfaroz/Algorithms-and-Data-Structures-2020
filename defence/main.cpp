#include <iostream>
#include <string>

using namespace std;
bool between(int first, int last, int v);

int main()
{
    int pKing, pQueen, pNewQueen;

    while(cin >> pKing >> pQueen >> pNewQueen){

        int xKing = pKing / 8;
        int yKing = pKing % 8;

        int xQueen = pQueen / 8;
        int yQueen = pQueen % 8;

        int xNewQueen = pNewQueen / 8;
        int yNewQueen = pNewQueen % 8;

        if(pKing == pQueen){
            cout << "Illegal State";
        }else if(xQueen != xNewQueen && yQueen != yNewQueen){
            cout << "Illegal move";
        }else if(pQueen == pNewQueen){
            cout << "Illegal move";
        }else{
            if((xKing == xNewQueen && abs(yKing - yNewQueen) == 1) || (yKing == yNewQueen) && abs(xKing - xNewQueen) == 1){
                cout << "Moved not allowed";
            }else if((pKing == 0 && pNewQueen == 9) || (pKing == 56 && pNewQueen == 49) || (pKing == 7 && pNewQueen == 14)
            || (pKing == 63 && pNewQueen == 54)){
                cout << "stop";
            }else if((xNewQueen == xQueen && xNewQueen == xKing && between(yQueen, yNewQueen, yKing)) ||)
        }
    }
}

bool between(int first, int last, int v){
    return (first < last ? v >= first && v <= last : v >= last && v <= first);
}