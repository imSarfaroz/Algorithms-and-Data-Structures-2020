#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <sstream>

using namespace std;

struct team
{
    int numOfTeam = 0;
    int problems = 0;
    int totalTime = 0;

    team(const int &num) : numOfTeam(num)
    {
    }

    friend ostream &operator<<(ostream &output, const team &t)
    {
        output << t.numOfTeam << " " << t.problems << " " << t.totalTime;
        return output;
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

struct cmpTeamByACMRules
{
    bool operator()(const team &t1, const team &t2)
    {
        if (t1.problems != t2.problems)
            return t1.problems > t2.problems;

        if (t1.totalTime != t2.totalTime)
            return t1.totalTime < t2.totalTime;

        return t1.numOfTeam < t2.numOfTeam;
    }
};

struct cmpTeamByNumber
{
    bool operator()(const team &t1, const team &t2)
    {
        return t1.numOfTeam < t2.numOfTeam;
    }
};

int main()
{
    int numOfCases;
    cin >> numOfCases;

    cin.ignore(numeric_limits<int>::max(), '\n');
    cin.ignore(numeric_limits<int>::max(), '\n');

    for (int i = 0; i < numOfCases; i++)
    {
        if (i != 0)
            cout << endl;

        vector<submission> sub;
        vector<team> teams;
        string line;
        while (getline(cin, line) && !line.empty())
        {

            istringstream inp(line);
            int n1 = 0;
            int n2 = 0;
            int n3 = 0;
            char res;

            inp >> n1 >> n2 >> n3 >> res;

            if (find_if(sub.begin(), sub.end(), [&n2, &n1](const submission &s) {
                    return (s.problemRes == 'C' && s.problemRes == 'R' && s.problemRes == 'I');
                }) == sub.end())
                sub.emplace_back(n1, n2, n3, res);

            if (find_if(teams.begin(), teams.end(), [&n1](const team &t) { return n1 == t.numOfTeam; }) == teams.end())
                teams.emplace_back(n1);
        }
        for (auto &e : sub)
        {
            int numOfTeam = e.numOfTeam;
            auto teamT = find_if(teams.begin(), teams.end(), [numOfTeam](const team &t) { return numOfTeam == t.numOfTeam; });

            int numOfProblem = e.numOfProblem;
            auto cProblem = find_if(sub.begin(), sub.end(), [numOfProblem, numOfTeam](const submission &s) {
                return s.numOfTeam == numOfTeam && s.problemRes == 'C' && numOfProblem == s.numOfProblem;
            });

            if (cProblem != sub.end())
            {
                if (e.problemRes == 'I')
                    teamT->totalTime += 20;

                if (e.problemRes == 'C')
                    teamT->totalTime += e.sumOfTime;
            }

            if (e.problemRes == 'C' && e.numOfTeam == teamT->numOfTeam)
                teamT->problems++;
        }

        // sort(teams.begin(), teams.end(), cmpTeamByName());
        sort(teams.begin(), teams.end(), cmpTeamByACMRules());

        for (const auto &t : teams)
            cout << t << endl;

        sub.clear();
        teams.clear();
        cin.clear();
    }
}
