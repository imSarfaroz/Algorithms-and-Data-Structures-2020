#include <iostream>

using namespace std;

int main()
{
    int gold, silver, copper;
    cin >> gold >> silver >> copper;

    int total = gold * 3 + silver * 2 + copper;

    string cards, tr;
    if (total > 7)
    {
        cards = "Province";
    }
    else if (total > 4)
    {
        cards = "Duchy";
    }
    else if (total > 1)
    {
        cards = "Estate";
    }
    if (total > 5)
    {
        tr = "Gold";
    }
    else if (total > 2)
    {
        tr = "Silver";
    }
    else
    {
        tr = "Copper";
    }
    if (cards != "")
    {
        cout << cards << " or ";
    }
    cout << tr << endl;
}