#include <iostream>
#include <vector>
#include <string>

using namespace std;

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
        if (isdigit(a[0]))
        {
            a = stoi(cRadius);
            a /= 2;
            cups.push_back()
        }
        else
        {
            a = stoi(cDiameter);
            cups.push_back();
        }
    }
}