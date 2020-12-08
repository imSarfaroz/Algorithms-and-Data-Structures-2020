#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int numOfTest;

    for (string str; cin >> str;)
    {
        if (numOfTest != 0)
        {
            cout << endl;
        }
        numOfTest++;

        // struct Pair { int ascii; int value},  given
        vector<Pair> vec; //Need to create struct Pair
        vector<int> counter(100, 0);
    }
}