#include <iostream>
#include <cmath>
#include <string>

using namespace std;

char board[10][10];

int xKingBlack, yKingBlack;
int xKingWhite, yKingWhite;

int xPawnWhite[] = {-1, 1};
int yPawnWhite[] = {-1, -1};
int xPawnBlack[] = {-1, 1};
int yPawnBlack[] = {1, 1};

void BlackKingXY();
void WhiteKingXY();

int main()
{
    int num = 0;

    while (true)
    {
        cout << "Game #" << num++ << endl;
        BlackKingXY();
        WhiteKingXY();
    }
}

void BlackKingXY()
{
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (board[i][j] == 'k')
            {
                xKingBlack = i;
                yKingBlack = j;
                return;
            }
        }
    }
}

void WhiteKingXY()
{
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (board[i][j] == 'K')
            {
                xKingWhite = i;
                yKingBlack = j;
                return;
            }
        }
    }
}

void solve()
{
    int x, y;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            char br = board[i][j];

            // Need to calculate whether the king is detected
            if (br == 'p')
            {
            }

            if (br == 'P')
            {
            }

            if (br == 'N')
            {
            }

            if (br == 'n')
            {
            }

            if (br == 'R')
            {
            }

            if (br == 'r')
            {
            }

            if (br == 'q')
            {
            }

            if (br == 'Q')
            {
            }

            if (br == 'b')
            {
            }

            if (br == 'B')
            {
            }
        }
    }
}
