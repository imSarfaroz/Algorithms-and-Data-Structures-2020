#include <iostream>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

int main()
{
    int score;

    string result;
    int points = 0;
    int solved = 0;

    string problem;
    map<string, char> submissions;

    while (true)
    {
        cin >> score; //  3   10

        if (score == -1)
        {
            break;
        }
        cin >> problem >> result; // H    right     A  wrong

        if (result.compare("wrong") == 0)
        {
            submissions[problem] += 20;
        }
        else
        {
            solved++;
            points += score;
            points += submissions[problem];
            // 3 + 200 + 20(A) + 20(A) + 300
        }
    }
    cout << solved << points << endl;
}