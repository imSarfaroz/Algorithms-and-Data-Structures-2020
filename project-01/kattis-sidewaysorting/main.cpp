#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int lines, ch;

    while (cin >> lines && cin >> ch && lines != 0 && ch != 0)
    {
        vector<string> v;
        v.resize(ch, "");

        for (int i = 0; i < lines; i++)
        {
            for (int j = 0; j < ch; j++)
            {
                char a;
                cin >> a;
                v[j].push_back(a);
            }
        }

        stable_sort(v.begin(), v.end(), ?)
    }
}