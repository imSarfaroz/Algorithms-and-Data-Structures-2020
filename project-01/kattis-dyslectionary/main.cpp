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

void reorder(vector<string> &v);
{
    //need to find length
    //reverse
    //sort
    //reverse
    //print
}
