#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int numOfCases;
    vector<string> names;
    string name;

    while(cin >> numOfCases)
    {
        cin.ignore();

        for (int i = 0; i < numOfCases; i++)
        {
            cin >> name;
            names.push_back(name); 
        }

        stable_sort(names.begin(), names.end(), [](string s1, string s2) {
            if(s1[0] != s2[0])
            {
                return s1[0] < s2[0];
            }
            else
            {
                return s1[1] < s2[1];
            }
        });

        for(auto &a: names)
        {
            cout << a << endl;
        }

        names.clear();
    }
}