#include <iostream>

using namespace std;

int main()
{
    string score;
    cin >> score;

    int length;
    length = score.length() - 2;

    cout << score.at(length); // AT 14 -> A
}