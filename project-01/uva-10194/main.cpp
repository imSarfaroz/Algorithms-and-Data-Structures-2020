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
        int n1 = 0;
        int n2 = 0;

        // initializing
        cin >> n1;
        for (int i = 0; i < n1; i++)
        {
            string teamName;
            getline(cin, teamName);

            teams.emplace_back(teamName);
        }

        // game results
        cin >> n2;
        for (int j = 0; j < n2; j++)
        {
            string game;
            getline(cin, game);

            int goal1 = game.find('#');
            int goal2 = game.find('#', goal1 + 1);
            int special = game.find('@');

            string firstTeam = game.substr(0, goal1);

            string secondTeam = game.substr(goal2 + 1);
        }
    }
}
