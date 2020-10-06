#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double price(double p, double a, double b, double c, double d, int k)
{
    return (p * (sin(a * k + b) + cos(c * k + d) + 2));
}

int main()
{
    int num;
    int p, a, b, c, d;

    cin >> p >> a >> b >> c >> d >> num;
    vector<double> prices;

    for (int i = 1; i <= num; i++)
    {
        prices.push_back(price(p, a, b, c, d, i));
    }

    double high = 0;
    double diff = 0;

    high = prices[0];
    for (int i = 1; i < num; i++)
    {
        diff = max(diff, high - prices[i]);
        high = max(high, prices[i]);
    }

    cout.precision(10);
    cout << fixed;
    cout << diff << endl;
}
