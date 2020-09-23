#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int diff = b - a;
    if(diff < 0){
        if (diff == -1)
            cout << "Dr. Chaz needs " << -diff << " more piece of chicken!\n";
        else
            cout << "Dr. Chaz needs " << -diff << " more pieces of chicken!\n";
    }else{
        if (diff == 1)
            cout << "Dr. Chaz will have " << diff << " piece of chicken left over!\n";
        else
            cout << "Dr. Chaz will have " << diff << " pieces of chicken left over!\n";
    }
}