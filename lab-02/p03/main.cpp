#include <iostream>

using namespace std;

int main()
{
    float x;
    int answer;

    cin >> x;

    answer = x * (5280.0 / 4854.0) * 1000.0 + 0.5;

    cout << answer << endl;

}