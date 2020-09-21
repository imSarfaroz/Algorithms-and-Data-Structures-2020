#include <iostream>

using namespace std;

int main()
{
    int months = 0;
    int mb = 0;

    cin >> mb;
    cin >> months;

    int internetUsed = 0;

    for (int i = 0; i < months; i++)
    {
        int data;
        cin >> data;
        internetUsed += data;
    }

    cout << mb * (months + 1) - internetUsed << endl;
}
