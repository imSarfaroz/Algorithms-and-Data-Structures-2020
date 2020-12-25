#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string atributes;
    int index;
    getline(cin, atributes);

    vector<string> vec;
    vec.push_back("");
    for (auto i : atributes)
    {
        if (i == ' ')
        {
            vec.push_back("");
        }
        else
        {
            vec.back().push_back(i);
        }
    }

    //taking songs
    int numOfSongs;
    cin >> numOfSongs;
    vector<vector<string>> itunes;
    for (int i = 0; i < numOfSongs; i++)
    {
        vector<string> song;
        for (int j = 0; j < vec.size(); j++)
        {
            string s;
            cin >> s;
            song.push_back(s);
        }
        itunes.push_back(song);
    }

    //sorting the songs
    // 3
    //     Artist
    //     Album
    //     Song_Title

    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string nAttribute;
        cin >> nAttribute;

        // sort
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] == nAttribute)
            {
                index = i;
            }
        }
        stable_sort(itunes.begin(), itunes.end(), [index](vector<string> a, vector<string> b) {
            return a[index] < b[index];
        });

        cout << atributes << endl;
        for(auto song: itunes)
        {
            for(auto property: song)
            {
                cout << property << " ";
            }
            cout << endl;
        }
    }
}