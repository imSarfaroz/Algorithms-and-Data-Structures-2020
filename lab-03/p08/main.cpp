#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int numOfPeople;
    string name, friends;
    vector<string> names;

    while (cin >> numOfPeople)
    {
        vector<string> group;
        for (int i = 0; i < numOfPeople; i++)
        {
            cin >> name;
            group[name] = 0;
            names.push_back(name);
        }
    }
}