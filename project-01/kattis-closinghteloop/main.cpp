#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <string>

using namespace std;

int main()
{
    int numOfCases;
    cin >> numOfCases;

    for (int i = 1; i <= numOfCases; i++)
    {

        int segments;
        cin >> segments;

        vector<int> blue, red;

        while (segments--)
        {
            int num;
            char color;
            cin >> num >> color;

            if (color == 'R')
            {
                red.push_back(num);
            }
            else
            {
                blue.push_back(num);
            }
        }
        sort(red.rbegin(), red.rend());
        sort(blue.rbegin(), blue.rend());


        int total = 0;

        for (int j = 0; j < min(red.size(), blue.size()); j++)
        {
            // total = accumulate(red.begin(), red.end(), 0) + accumulate(blue.begin(), blue.end(), 0);
            // total -= 1;

            // if(j != 0)
            // {
            //     total -= 1;
            // }

            total += red[j] + blue[j] - 1;
            if (j != 0)
            {
                total -= 1;
            }
        }
            cout << "Case #" << i << ": ";
            cout << (total - 1 >= 0 ? total - 1 : 0) << endl;
        }
}