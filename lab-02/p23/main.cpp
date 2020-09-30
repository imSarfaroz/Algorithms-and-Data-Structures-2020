#include <iostream>

using namespace std;

int main()
{
    int num;

    while (true)
    {
        cin >> num;

        if (num == -1)
        {
            break;
        }

        int prevtrip = 0;
        int miles = 0;

        for (int i = 0; i < num; i++)
        {
            int miles_hour, time;
            cin >> miles_hour >> time;

            miles += miles_hour * (time - prevtrip);
            prevtrip = time;
        }
        cout << miles << " miles" << endl;
    }
}