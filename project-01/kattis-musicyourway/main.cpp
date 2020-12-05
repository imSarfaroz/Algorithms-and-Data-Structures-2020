#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string atributes;
    getline(cin, atributes);

    //taking songs
    int numOfSongs;
    cin >> numOfSongs;
    vector<vector<string>> v;
    for (int i = 0; i < numOfSongs; i++)
    {
        vector<string> song;
        for (int j = 0; j < numOfSongs; j++)
        {
            string s;
            cin >> s;
            song.push_back(s);
        }
        v.push_back(song);
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
        //stable_sort();
    }
}