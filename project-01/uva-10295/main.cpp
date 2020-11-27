#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

struct Skill
{
    string mName;
    int mPoints;
    Skill(const string &n, int p) : mName(n), mPoints(p)
    {
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    vector<Skill> skills;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int p;
        cin >> p;
        //skills.push_back(Skill(s, p));
        skills.emplace_back(s, p);
    }

    sort(begin(skills), end(skills), [](const Skill s1, Skill s2) {
        return s1.mName < s2.mName;
    });

    for (int i = 0; i < m; i++)
    {
        int points = 0;

        for (string w; cin >> w && w != ".";)
        {
            auto p = lower_bound(begin(skills), end(skills), Skill(w, 0), [](const Skill &s1, const Skill &s2) {
                return s1.mName < s2.mName;
            });

            if (p != end(skills) && p -> mName == w)
            {
                points += p->mPoints;
            }
        }
        cout << points << "\n";
    }
}