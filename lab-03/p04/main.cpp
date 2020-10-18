#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int numOfMonths;
    int depRec;
    double downPay;
    double loanPay;

    while (cin >> numOfMonths >> depRec >> downPay >> loanPay)
    {
        vector<double> depRecVal(numOfMonths, 0.0);

        for (int i = 0; i < depRec; ++i)
        {
            int month;
            cin >> month;
        }

        // loan / numofmonths = monthpayment
        // 15000 / 300 = 500
    }
}
