#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <string>

using namespace std;

struct team
{
    string name;
    int numOfGames;
    int allGoals;
    int goalScored;
    int goalAgainst;
    int allPoints;
    int wins;
    int losses;
    int ties;
};

struct cmpByName
{
};

struct cmpByResult
{
};

int main()
{
    int numOfcases;
    cin >> numOfcases;

    for (int mCase = 0; mCase < numOfcases; mCase++)
    {
        vector<team> teams;

        string tourName;
        cin >> tourName;
    }
}
