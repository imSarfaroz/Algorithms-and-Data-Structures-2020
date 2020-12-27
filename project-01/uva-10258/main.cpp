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

        int n1, n2, n3;
        char res;

        cin >> n1 >> n2 >> n3 >> res;

        if (find_if(sub.begin(), sub.end(), [&n2, &n1](const submission &s) {
                return (s.problemRes == 'C' && s.problemRes == 'R' && s.problemRes == 'I');
            }) == sub.end())
            ;

        if (find_if(teams.begin(), teams.end(), [&n1](const team &t) { return n1 == t.numOfTeam; }) == teams.end())
            ;

        for (auto &e : sub)
        {
            int numOfTeam = e.numOfTeam;
            auto teamT = find_if(teams.begin(), teams.end(), [numOfTeam](const team &t) { return numOfTeam == t.numOfTeam; });

            int numOfProblem = e.numOfProblem;
            auto cProblem = find_if(sub.begin(), sub.end(), [numOfProblem, numOfTeam](const submission &s) {
                return s.numOfTeam == numOfTeam && s.numOfProblem == 'C' && numOfProblem == s.numOfProblem;
            });
        }
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
    char problemRes;

    submission(const int &num1, const int &num2, const int &num3, const char &res)
    {
        numOfTeam = num1;
        numOfProblem = num2;
        sumOfTime = num3;
        problemRes = res;
    }
};