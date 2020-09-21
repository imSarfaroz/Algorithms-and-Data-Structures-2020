#include <iostream>

using namespace std;

int main()
{
    char months[3];
    int day;

    cin >> months >> day;

    if ((months[0] == 'O' && day == 31) || (months[0] == 'D' && day == 25)){

        cout << "yup" << endl;
    }else{
        cout << "nope" << endl;
    }
}