#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int gameNum;
    cin >> gameNum;
    bool isOver = false;

    for (int t = 0; t < gameNum; t++)
    {
        int num;
        cin >> num;

        vector<vector<char>> grid(num, vector<char>(num, '.'));
        vector<vector<char>> game(num, vector<char>(num, '.'));

        // Mine's location
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                cin >> grid[i][j];
            }
        }

        // Reading touched position
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                char touchedPos;
                cin >> touchedPos;
                if (touchedPos == 'x' && grid[i][j] == '*')
                {
                    isOver = true;
                }
                game[i][j] = touchedPos;
            }
        }

        if (t != 0)
            cout << endl;

        //Printing process
        for (int a = 0; a < grid.size(); a++)
        {
            for (int b = 0; b < grid[a].size(); b++)
            {
                if (grid[a][b] == '*')
                {
                    cout << (isOver ? '*' : '.');
                }
                else if (game[a][b] == '.')
                {
                    cout << ".";
                }
                else
                {
                    int mines = 0;
                    //Check sides
                    for (int i = a - 1; i <= a + 1; i++)
                    {
                        for (int j = b - 1; j <= b + 1; j++)
                        {
                            if ((0 <= i && i < num) && (0 <= j && j < num))
                            {
                                if (grid[i][j] == '*')
                                {
                                    ++mines;
                                }
                            }
                        }
                    }
                    cout << mines;
                }
            }
            cout << endl;
        }
    }
}