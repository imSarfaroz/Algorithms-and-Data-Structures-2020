#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int kNamewidth = 25;
const int kAvaregewisth = 40;
const string kNoDataMsg = "no data";

int main()
{
    string t;
    cout << setfill('.') << fixed << setprecision(2);
    for (string name; cin >> name;)
    {
        double sum = 0;
        int nGrades = 0;
        for (int grade; cin >> grade;)
        {
            sum += grade;
            ++nGrades;
        }
        if (nGrades != 0)
        {
            cout << left << setw(kNamewidth) << name << "|" << right << setw(kAvaregewisth) << sum / nGrades << "\n";
        }
        else
        {
            cout << left << setw(kNamewidth) << name << "|" << right << setw(kAvaregewisth) << kNoDataMsg << "\n";
        }
        cin.clear();
    }
}