#include <iostream>
#include <cmath>
#include <string>

using namespace std;

char board[10][10];

int xKingBlack, yKingBlack;
int xKingWhite, yKingWhite;

bool whiteKing = false;
bool blackKing = false;

void BlackKingXY();
void WhiteKingXY();
void solve();
bool xyWhiteKing(int x, int y);
bool xyBlackKing(int x, int y);
bool blank();

bool valid(int x, int y)
{
    return (x >= 0 && x < 8 && y >= 0 && y < 8);
}

int main()
{
    int num = 0;
    whiteKing = false;
    blackKing = false;

    if (!blank())
    {
        cout << "Game #" << ++num << endl;
        BlackKingXY();
        WhiteKingXY();
        solve();
    }
}

int xPawnWhite[] = {-1, 1};
int yPawnWhite[] = {-1, -1};
int xPawnBlack[] = {-1, 1};
int yPawnBlack[] = {1, 1};

int knightX[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int knightY[] = {-1, 1, -2, 2, -2, 2, -1, 1};

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
            char &br = board[i][j];

            // Need to calculate whether the king is detected by P, Q, R, B, N
            if (br == 'p')
            {
                for (int a = 0; a < 2; a++)
                {
                    x = i + yPawnBlack[a];
                    y = j + xPawnBlack[a];
                    if (xyWhiteKing(x, y) && valid(x, y))
                    {
                        whiteKing = true;
                    }
                }
            }

            if (br == 'P')
            {
                for (int a = 0; i < 2; i++)
                {
                    x = i + yPawnWhite[a];
                    y = j + xPawnBlack[a];
                    if (xyBlackKing(x, y) && valid(x, y))
                    {
                        blackKing = true;
                    }
                }
            }

            if (br == 'N')
            {
                for (int a = 0; i < 8; a++)
                {
                    x = i + knightX[a];
                    y = j + knightY[a];

                    if (xyBlackKing(x, y) && valid(x, y))
                    {
                        blackKing = true;
                    }
                }
            }

            if (br == 'n')
            {
                for (int a = 0; i < 8; a++)
                {
                    x = i + knightX[a];
                    y = j + knightY[a];

                    if (xyWhiteKing(x, y) && valid(x, y))
                    {
                        whiteKing = true;
                    }
                }
            }

            if (br == 'R' || br == 'Q')
            {
            }

            if (br == 'r' || br == 'q')
            {
            }

            if (br == 'B' || br == 'Q')
            {
            }

            if (br == 'b' || br == 'q')
            {
            }
        }
    }

    if (!whiteKing && !blackKing)
    {
        cout << "no king is in check"
             << "\n";
    }
    else if (whiteKing)
    {
        cout << "white king is in check"
             << "\n";
    }
    else
    {
        cout << "black king is in check"
             << "\n";
    }
}

bool blank()
{
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (board[i][j] != '.')
                return false;
        }
    }
    return true;
}

bool xyWhiteKing(int x, int y)
{
    return (x == xKingWhite && y == yKingWhite);
}

bool xyBlackKing(int x, int y)
{
    return (x == xKingBlack && y == yKingBlack);
}
