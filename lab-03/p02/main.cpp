#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num, commandNumber;
    string commands;
    cin >> num;

    for (int i = 0; i < num; i++)
    { // #2
        int position = 0;
        int step;
        cin >> step;

        vector<int> saveCommand;

        for (int j = 1; j <= step; j++)
        {                    // #3
            cin >> commands; // String LEFT RIGHT

            if (commands == "LEFT")
            {
                saveCommand.push_back(-1);
                position--;
            }
            else if (commands == "RIGHT")
            {
                saveCommand.push_back(1);
                position++;
            }
            else if (commands == "SAME")
            {
                cin >> commands;      // Take AS
                cin >> commandNumber; //Take Number

                saveCommand.push_back(saveCommand[commandNumber - 1]);
                position += saveCommand[commandNumber - 1];
            }
        }
        cout << position << endl;
    }
}