#include <iostream>
#include <vector>
#include <cmath>

double decNumber = 1e-4; //0.00001
using namespace std;

inline bool isNearlyEqual(double a, double b)
{
    return abs(a - b) < decNumber;
}

int main()
{
    int numOfMonths;
    int depRec;
    double downPay;
    double loanPay;

    while (cin >> numOfMonths >> downPay >> loanPay >> depRec)
    {
        if (numOfMonths < 0)
            break;
        vector<double> depRecVal(numOfMonths, 0.0);

        for (int i = 0; i < depRec; ++i)
        {
            int month;
            cin >> month;
            cin >> depRecVal[month];
        }

        for (int i = 0; i < depRecVal.size(); ++i)
        {
            if (isNearlyEqual(depRecVal[i], 0.0))
            {
                depRecVal[i] = depRecVal[i - 1];
            }
        }
        // loan / numofmonths = monthpayment
        // 15000 / 300 = 500

        int months = 0;

        double monthPayment = loanPay / numOfMonths;
        double carPrice = (loanPay + downPay) * (1 - depRecVal[0]);

        int index = 1;

        while (loanPay - carPrice > decNumber)
        {
            carPrice *= (1 - depRecVal[index++]);
            loanPay -= monthPayment;
            ++months;
        }

        cout << months << " month";
        if (months != 1)
            cout << "s";

        cout << '\n';
    }
}
