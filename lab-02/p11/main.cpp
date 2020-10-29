#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int diff = b - a;
    if(diff < 0){
        if (diff == -1)
            cout << "Dr. Chaz needs " << -diff << " more piece of chicken!";
        else
            cout << "Dr. Chaz needs " << -diff << " more pieces of chicken!";
    }else{
        if (diff == 1)
            cout << "Dr. Chaz will have " << diff << " piece of chicken left over!";
        else
            cout << "Dr. Chaz will have " << diff << " pieces of chicken left over!";
    }
}