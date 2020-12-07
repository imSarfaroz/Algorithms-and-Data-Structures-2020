#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int nTest;
    cin >> nTest;

    for (int i = 0; i < nTest; i++)
    {
        int R, C, M, N;
        cin >> R >> C >> M >> N;

        // vector<Freq> vec;   need strcut Freq
        vector<int> counter(100, 0); //  filling the counter vector with the number frequencies

        for (int j = 0; j < R; j++)
        {
            string str;
            cin >> str;
            for (auto i : str)
            {
                counter[i]++;
            }
        }
    }
}