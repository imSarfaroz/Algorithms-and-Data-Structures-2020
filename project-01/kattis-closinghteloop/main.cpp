#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int numOfCases;
    cin >> numOfCases;

    for (int i = 0; i < numOfCases; i++)
    {

        int segments;
        cin >> segments;

        vector<int> blue, red;

        while (segments--)
        {
            int num;
            int color;
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

        for (int j = 0; j < red.size; j++)
        {
            //calculations
        }
    }
}