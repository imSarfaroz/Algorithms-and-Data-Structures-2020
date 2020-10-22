#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int numOfPeople;
    string name, friends;
    vector<string> names;
    int gift, numGiftGiven;
    int count = 0;

    while (cin >> numOfPeople) //    5
    {
        names.clear();
        map<string, int> group;
        for (int i = 0; i < numOfPeople; i++)
        {
            cin >> name; //  dave laura owen vick amr
            group[name] = 0;
            names.push_back(name);
        }

        for (int j = 0; j < numOfPeople; j++)
        {
            cin >> name >> gift >> numGiftGiven; // dave 200 3
            if (numGiftGiven > 0)
            { //

                group[name] += gift % numGiftGiven;
                group[name] -= gift; // D = -200
                for (int k = 0; k < numGiftGiven; k++)
                {
                    cin >> friends;                        // laura owen vick
                    group[friends] += gift / numGiftGiven; // L +66  O +66  V +66
                }
            }
        }
        for (int i = 0; i < names.size(); i++)
        {
            cout << names[i] << " " << group[names[i]] << endl;
        }
        count++;
    }
}