#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    while (true)
    {
        string digit;
        cin >> digit;

        if (digit == "END")
        {
            break;
        }

        if (digit == "1")
        {
            cout << "1" << endl;
            continue;
        }

        // 42 5 END

        int i = 2;
        int dLength = digit.length();
        int num = log10(dLength) + 1;
        while (num != dLength)
        {
            dLength = num;
            num = log10(dLength) + 1;
            i++;
        }
        cout << i << endl;
    }
}