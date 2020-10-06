#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    cout << a << ":" << endl;

    for (int i = 1; i < a - 1; i++){
        if (a % i == 0 && i != 1){

            cout << i << "," << i << endl;

        }
        int result = 0;
        for (int j = 0; result < a; j++){
            if (j % 2 == 0){
                result += i + 1;
            }
            else{
                result += i;
            }
        }
        if (result == a){
            cout << (i + 1) << "," << i << endl;
        }
    }
}