#include <vector>
#include <iostream>
#include <string>

using namespace std;

string join(const vector<string> &v)
{
    string r;

    if (!v.empty())
    {
        r = v[0];
        for (size_t i = 1; i < v.size(); i++)
        {
            r += " ";
            r += v[i];
        }
    }

    return r;
}
