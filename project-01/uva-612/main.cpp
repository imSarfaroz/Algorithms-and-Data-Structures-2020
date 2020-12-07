#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int measure(string str);

//Struct
struct specialString
{
    string s;
    int msr;
};

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
            cin >> vec[i].s;
            vec[i].msr = measure(vec[i].s);
        }

        // stableSort (if elements are equal, remains orders)
        stable_sort(vec.begin(), vec.end(), [](specialString x, specialString y) {
            return x.msr < y.msr;
        });

        //printing
        for (int i = 0; i < numOfElements; i++)
        {
            cout << vec[i].s << endl;
        }
    }
}


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
