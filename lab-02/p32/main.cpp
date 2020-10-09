#include <iostream>

using namespace std;

int isScore(int a, int b)
{
    int highest = 1000;

    if(b == 2 && a == 1){
        return highest;
    }

    if(a == 2 && b == 1){
        return highest;
    }
    if(b > a){
         swap(b, a);  
    }
    if (a == b){
        return a * 100;
    }

    return a * 10 + b;
}

int main()
{
    int p1, p2, s1, s2;
    int P1result, P2result;

    while (cin >> p1 >> p2 >> s1 >> s2 && p1 != 0 && p2 != 0 && s1 != 0 && s2 != 0)
    {
        P1result = isScore(p1, p2);
        P2result = isScore(s1, s2);

    if(P1result > P2result){
        cout << "Player 1 wins" << endl;
        
    }
    if(P1result < P2result){
        cout << "Player 2 wins" << endl;
        
    }
    if(P1result == P2result){
        cout << "Tie" << endl;

    }
    }
}