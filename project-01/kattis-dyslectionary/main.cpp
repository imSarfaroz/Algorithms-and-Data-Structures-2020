#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void reorder(vector<string> &v);

int main()
{
    string words;
    vector<string> v;

    while (getline(cin, words))
    {
        if (words == "")
        {
            reorder(v);

            cout << endl;
            words.clear();
            continue;
        }

        v.push_back(words);
    }

    reorder(v);
}

void reorder(vector<string> &v)
{
    // finding max length
    int max = 0;
    for (auto e : v)
    {
        if (e.length() > max)
        {
            max = e.length();
        }
    }

    //reverseing to sort in alph. order
    for (auto &i : v)
    {
        reverse(i.begin(), i.end());
    }

    //sorting
    sort(v.begin(), v.end());

    //reversing to get initial words
    for (auto &i : v)
    {
        reverse(i.begin(), i.end());
    }
}
