#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int max = 50;  // max day of vac
    int tem = 0;

    vector<int> n(num);

    for (auto &&i : n) // access by forwarding reference, the type of i is int&
    {
        cin >> i;    // filling vector
    }

    //23 27 31 28 30

        for (int i = 2; i < num; i++)
{
        if (max > std::max(n[i], n[i - 2])) {
            max = std::max(n[i], n[i - 2]);
            tem = i - 1;
        }
    }
    cout << tem << " " << max << endl;
}