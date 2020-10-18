#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string birthdayWishes[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};

    int numOfPeople;
    cin >> numOfPeople;

    vector<string> names(numOfPeople);

    for (int i = 0; i < numOfPeople; ++i)
    {
        cin >> names[i];
    }

    bool complete = false;

    for (int person = 0, cWord = 0; cWord < 16 || !complete; ++person, ++cWord)
    {

        cWord %= 16;
        cout << names[person] << ": " << birthdayWishes[cWord] << '\n';

        if (person + 1 == numOfPeople)
        {
            complete = true;
            person = -1;
        }
    }
}