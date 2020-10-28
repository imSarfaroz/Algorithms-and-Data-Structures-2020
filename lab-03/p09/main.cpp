#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main()
{
    int numDevice, numOper, capacity, device, maxCapacity, sumCapacity;

    nt a = 100;
    vector<int> cap(a);

    bool on[100];
    bool isSafe;
    int count = 1;

    while (cin >> numDevice >> numOper >> capacity)
    { // 2 2 10
        if (numDevice == 0 && numOper == 0 && capacity == 0)
        {
            break;
        }

        for (int i = 1; i <= numDevice; i++)
        { // 2
            cin >> cap[i];
            on[i] = false;
        }

        maxCapacity = 0, sumCapacity = 0;
        isSafe = true;
        for (int i = 1; i <= numOper; i++)
        { // 2
            cin >> device;

            if (on[device])
            {
                sumCapacity -= cap[device];
            }
            else
            {
                sumCapacity += cap[device];
            }

            if (maxCapacity < sumCapacity)
            {
                maxCapacity = sumCapacity;
            }
            if (sumCapacity > capacity)
            {
                isSafe = false;
            }

            on[device] = !on[device];
        }

        cout << "Sequence " << count++ << endl;
        if (isSafe)
        {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << maxCapacity << " amperes." << endl;
        }
        else
        {
            cout << "Fuse was blown." << endl;
        }
        cout << endl;
    }
}