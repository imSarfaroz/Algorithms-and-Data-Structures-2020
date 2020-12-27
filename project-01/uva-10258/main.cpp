#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct team;
struct submission;

int main()
{
    int numOfCases;
    cin >> numOfCases;

    for (int i = 0; i < numOfCases; i++)
    {

        vector<submission> sub;
        vector<team> teams;
    }
}

struct team
{
    int numOfTeam = 0;
    int problems = 0;
    int sumOfTime = 0;

    team(const int &num) : numOfTeam(num)
    {
    }
};

struct submission
{
    int numOfTeam = 0;
    int numOfProblem = 0;
    int sumOfTime = 0;
}