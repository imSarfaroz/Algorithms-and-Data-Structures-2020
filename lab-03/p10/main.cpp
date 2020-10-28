#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    int number;
    int a = 101;
    int b = 5;

    vector<vector<int>> Roman(a, vector<int> (b));
    

    for (int i = 1; i < 101; i++)
    {
        int curNumber = i;

        Roman[i][4] = Roman[i - 1][4];
        Roman[i][3] = Roman[i - 1][3];
        Roman[i][2] = Roman[i - 1][2];
        Roman[i][1] = Roman[i - 1][1];
        Roman[i][0] = Roman[i - 1][0];

        if(curNumber / 100)
        {
            Roman[i][4]++;
            curNumber = curNumber % 100;
        }

        if (curNumber / 50)
        {
            Roman[i][3]++;
            curNumber = curNumber % 50;
        }

        if (curNumber / 40)
        {
            Roman[i][3]++;
            Roman[i][2]++;
            curNumber = curNumber % 40;
        }

        if (curNumber / 90)
        {
            Roman[i][4]++;
            Roman[i][2]++;
            curNumber = curNumber % 90;
        }

        if (curNumber / 10)
        {
            Roman[i][2] = (curNumber / 10) + Roman[i][2];
            curNumber = curNumber % 10;
        }

        if (curNumber / 9)
        {
            Roman[i][2]++;
            Roman[i][0]++;
            curNumber = curNumber % 9;
        }

        if (curNumber / 5)
        {
            Roman[i][1]++;
            curNumber = curNumber % 5;
        }

        if (curNumber / 4)
        {
            Roman[i][1]++;
            Roman[i][0]++;
            curNumber = curNumber % 4;
        }

        if (curNumber / 1)
        {
            Roman[i][0] = (curNumber / 1) + Roman[i][0];
        }

        while((cin >> number) && number != 0)
        {
            cout << number << ": " << Roman[number][0] << "i " << Roman[number][1] << "v " << Roman[number][2]
                 << "x " << Roman[number][3] << "l " << Roman[number][4] << "c"
                 << "\n";
        }
    }
}