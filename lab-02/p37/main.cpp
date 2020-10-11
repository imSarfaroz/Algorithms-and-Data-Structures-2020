#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int numOfNames;
    cin >> numOfNames;

    vector<string> names(numOfNames);
    for (int i = 0; i < numOfNames; i++)
    {
        cin >> names[i]; // take all names
    }

    vector<string> increase(names);
    vector<string> decrease(names);

    // 5  JOE, BOB, ANDY, AL, ADAM

    sort(increase.begin(), increase.end());   // ADAM, AL, ANDY, BOB, JOE
    sort(decrease.rbegin(), decrease.rend()); // JOE, BOB, ANDY, AL, ADAM

    if (names == increase)
    {
        cout << "INCREASING" << endl;
    }
    else if (names == decrease)
    {
        cout << "DECREASING" << endl;
    }
    else
    {
        cout << "NEITHER" << endl;
    }
}
