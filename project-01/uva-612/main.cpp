#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct specialString;

int main()
{
    int num;
    cin >> num;

    while (num--)
    {
        int lengthLine;
        int numOfElements;
        cin >> lengthLine >> numOfElements;

        vector<specialString> vec(numOfElements);

        //measurement
        // need to write measure fnction. int measure(string str)
    }
}

//Struct
struct specialString
{
    string a;
    int m;
};
