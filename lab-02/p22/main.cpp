#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    int a, b, c;

    for (int i = 0; i < num; i++){
        bool d = true;
        a = 0;
        b = 0;

        cin >> a;
        cin >> b;
        for (int i = 1; i < a; i++){
            c = b;
            cin >> b;

            if(c + 1 != b && d){
                cout << i + 1 << endl;
                d = false;
            }
        }
    }
}