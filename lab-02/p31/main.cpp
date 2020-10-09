#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string num1, num2;
    int max;

    cin >> num1 >> num2;

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    max = std::max(stoi(num1), stoi(num2));

    cout << max << endl;
}