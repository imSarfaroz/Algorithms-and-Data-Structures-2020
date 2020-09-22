#include <iostream>

using namespace std;

int main()
{
    int numPeriods;

    cin >> numPeriods;

    double ans = 0;

    while(numPeriods--){
        double  a, b;
        cin >> a >> b;
        ans += a * b;
    }

    cout << ans << endl;
}