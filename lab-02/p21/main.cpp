#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int t = -1, answer = -1;

    for (int i = 0; i < num; i++)
    {
        int j;
        cin >> j;
        if (t == -1 || j < t)
        {
            t = j;
            answer = i;
        }
    }
    cout << answer << endl;
}