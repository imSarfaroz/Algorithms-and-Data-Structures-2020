#include <iostream>

using namespace std;

int main()
{
    int numOfYears, d;
    cin >> numOfYears >> d;

    bool isYear = false;

    for (int i = 0; i < numOfYears; ++i)
    {
        int swowYear;

        cin >> swowYear;
        if (swowYear <= d)
        {
            isYear = true;
            cout << "It hadn't snowed this early in " << i << " years!";
            break;
        }
    }
    if (!isYear)
    {
        cout << "It had never snowed this early!";
    }
}
