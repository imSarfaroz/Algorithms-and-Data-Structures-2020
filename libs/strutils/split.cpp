#include "strUtils.hpp"
#include <cctype>

using namespace std;

vector<string> split(const string &line)
{
    vector<string> r;

    size_t beg = line.size();
    for (size_t i = 0; i < line.size(); ++i)
    {

        if (isspace(line[i]) && beg != line.size())
        {
            r.emplace_back(line, beg, i - beg);
            beg = line.size();
        }
        else if (!isspace(line[i]) && beg == line.size())
        {
            beg = i;
        }
    }
    if (beg != line.size())
    {
        r.emplace_back(line.substr(beg));
    }
    return r;
}