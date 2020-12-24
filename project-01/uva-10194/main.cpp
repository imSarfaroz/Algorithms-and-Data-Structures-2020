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
    bool operator()(team &t1, team &t2)
    {
        string line1 = t1.name;
        string line2 = t2.name;

        for (char &e : line1)
        {
            e = tolower(e);
        }

        for (char &e : line2)
        {
            e = tolower(e);
        }

        return line1 < line2 && t1.numOfGames <= t2.numOfGames && t1.goalScored >= t2.goalScored && t1.goalAgainst >= t2.goalAgainst;
    }
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
            auto team1 = find_if(teams.begin(), teams.end(), [&firstTeam](const team &t) { return t.name == firstTeam; });

            string secondTeam = game.substr(goal2 + 1);
            auto team2 = find_if(teams.begin(), teams.end(), [&secondTeam](const team &t) { return t.name == secondTeam; });

            int goalFirst = stoi(game.substr(goal1 + 1, special - 1));
            int goalSecond = stoi(game.substr(special + 1, goal2 - 1));

            if (goalFirst > goalSecond)
            {
                team1->wins++;
                team2->losses++;
            }
            else if (goalFirst < goalSecond)
            {
                team1->losses++;
                team2->wins++;
            }
            else
            {
                team1->ties++;
                team2->ties++;
            }

            team1->numOfGames++;
            team2->numOfGames++;

            team1->goalScored += goalFirst;
            team1->goalAgainst += goalSecond;

            team2->goalScored += goalSecond;
            team2->goalAgainst += goalFirst;

            team1->allPoints = team1->wins * 3 + team1->ties;
            team2->allPoints = team2->wins * 3 + team2->ties;

            team1->allGoals = team1->goalScored - team1->goalAgainst;
            team2->allGoals = team2->goalScored - team2->goalAgainst;
        }
        cout << tourName << endl;

        // sorting
        sort(teams.begin(), teams.end(), cmpByName());
    }
}
