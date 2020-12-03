#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;
struct comp;

int main()
{
    int numOfCups;
    cin >> numOfCups;

    vector<pair<string, int>> cups;
    cups.resize(numOfCups);

    for (int i = 0; i < numOfCups; i++)
    {
        string cRadius;
        string cDiameter;

        cin >> cRadius >> cDiameter;
        int a;
        if (isdigit(cRadius[0]))
        {
            a = stoi(cRadius);
            a /= 2;
            cups.push_back(make_pair(cDiameter, a));
        }
        else
        {
            a = stoi(cDiameter);
            cups.push_back(make_pair(cRadius, a));
        }
    }

    sort(cups.begin(), cups.end(), [](const pair<string, int> &lhs, const pair<string, int> &rhs) {
        return lhs.second > rhs.second;
    });

    for (int i = numOfCups - 1; i >= 0; i--)
    {
        cout << cups[i].first << endl;
    }

    return 0;
}
