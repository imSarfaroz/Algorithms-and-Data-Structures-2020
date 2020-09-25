
// Logic is the same as I solved in Uri Problem "Robot Instractions"//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    { // #2
        int position = 0;
        int step;
        cin >> step;

        vector<int> saveCommand;

        for (int j = 1; j <= step; j++)
        { // #3
            string commands;
            cin >> commands; // LEFT RIGHT

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

                // Need to get last number
                // Find position += last number
            }
        }
        cout << position << endl;
    }
}