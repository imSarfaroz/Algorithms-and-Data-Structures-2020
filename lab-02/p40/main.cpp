#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<char>> game;

    int col, row;
    cin >> col >> row; // 2 2

    game.resize(col); //changing s
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            char num;
            cin >> num;
            game[i].push_back(num); //ES
        }                           //TW
    }

    int x = 0;
    int y = 0;
    int moves = 0;
    while (true)
    {
        if (x >= col || y >= row || x < 0 || y < 0)
        {
            cout << "out" << endl;
            break;
        }
        if (moves > row * col * 2)
        {
            cout << "lost" << endl;
            break;
        }
        if (game[x][y] == 'T')
        {
            cout << moves << endl;
            break;
        }
        else if (game[x][y] == 'E')
        {
            y++;
        }
        else if (game[x][y] == 'W')
        {
            y--;
        }
        else if (game[x][y] == 'N')
        {
            x--;
        }
        else if (game[x][y] == 'S')
        {
            x++;
        }
        moves++;
    }
}