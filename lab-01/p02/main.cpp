#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int kNamewidth = 25;
const int kAvaregewisth = 40;

int main()
{
    string name;
    cout << setfill('.') << fixed << setprecision(2);
    while(cin >> name)
    {
        double sum = 0;
        int nGrades = 0;
        int grade;

        while(cin >> grade){
            sum += grade;
            ++nGrades;        
            }
            if(nGrades != 0){
            cout << left << setw(kNamewidth) << name << "|" << right << setw(kAvaregewisth) << sum / nGrades << "\n";
            }else{
                cout << left << setw(kNamewidth) << name << "|" << right << setw(kAvaregewisth)
                     << "no data"
                     << "\n";
                    
            }
            if(cin.fail()){
                cin.clear();
            }
    }
}