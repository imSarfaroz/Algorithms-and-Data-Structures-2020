#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if(num1 > num2){
        swap(num1, num2);
    }

    if (num1 > num3){
        swap(num1, num3);
    }

    if(num2 > num3){
        swap(num2, num3);
    }

   //10 1 4 -> 1 4 10

     if (num3 - num2 == num2 - num1) {
        cout << num3 + num3 - num2 << endl;

    } else if (num3 - num2 > num2 - num1){
        cout << num2 + num2 - num1 << endl;
        
    } else {
        cout << num1 + num3 - num2 << endl;
    }
}