#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct specialString;
int measure(string str);

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
        for (int i = 0; i < numOfElements; i++)
        {
            cin >> vec[i].a;
            vec[i].m = measure(vec[i].a);
        }

        // stableSort (if elements are equal, remains orders)
        stable_sort(vec.begin(), vec.end(), //lumbda stringsoecial)
    }
}

//Struct
struct specialString
{
    string a;
    int m;
};

int measure(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] > str[j])
            {
                count++;
            }
        }
    }
    return count;
}
