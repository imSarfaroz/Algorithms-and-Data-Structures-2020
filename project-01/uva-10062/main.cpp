#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Pair
{
    int ascii;
    int value;

    Pair(char aAscii, int aValue)
        : ascii(aAscii), value(aValue)
    {
    }
};

int main()
{
    int numOfTest;

    for (string str; getline(cin, str);)
    {
        if (numOfTest != 0)
        {
            cout << endl;
        }
        numOfTest++;

        // struct Pair { int ascii; int value},  given
        vector<Pair> vec; //Need to create struct Pair
        vector<int> counter(100, 0);

        //filling the vector
        for (auto a : str)
        {
            counter[a]++;
        }

        //filling the Pair vector
        for (int i = 0; i < counter.size(); i++)
        {
            if (counter[i] != 0)
            {
                vec.push_back(Pair(i, counter[i]));
            }
        }

        sort(vec.begin(), vec.end(), [](Pair a, Pair b) {
            if (a.value == b.value) // if numbers are equal -> sorting by ASCII
            {
                return a.ascii > b.ascii;
            }
            return a.value < b.value;
        });

        //print the results

        for (auto i : vec)
        {
            cout << i.ascii << " " << i.value << endl;
        }
    }
}