#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    
    while(cin >> a >> b >> c >> d){

        if(a == 0 && b == 0 && c == 0 && d ==0){
            break;
        }

        cout << (120 + (a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9 << endl;
    }
}