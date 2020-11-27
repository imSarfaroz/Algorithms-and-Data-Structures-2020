#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    for (int n, m; cin >> n >> m && (n != 0 || m != 0);)
    {
        vector<int> v(n);

        for(auto &e : v)
        {
            cin >> e;
        }

        sort(begin(v), end(v), [m](int a, int b) {
            int rA = a % m;
            int rB = b % m;

            if(rA < rB)
            {
                return true;
            }

            if(rA > rB)
            {
                return false;
            }

            if(a % 2 != 0 && b % 2 == 0)
            {
                return true;
            }

            if (a % 2 != 0 && b % 2 != 0)
            {
                return a > b;
            }

            if (a % 2 == 0 && b % 2 == 0)
            {
                return a < b;
            }

            return false;
        });

        cout << m << " " << n << "\n";

        for(auto e : v)
        {
            cout << e << "\n";
        }
    }
    cout << "0 0\n";
}