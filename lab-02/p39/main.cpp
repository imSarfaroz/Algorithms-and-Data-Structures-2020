#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    cin >> num;  // num of cases
    for (int i = 0; i < num; i++){

    int numOfGdz;
    int numOfMgdz;

    cin >> numOfGdz;
    cin >> numOfMgdz;  // num of monsters

    vector<int> godzilla;
    vector<int> megagodzilla;

    for (int i = 0; i < numOfGdz; i++){
        int gdz;
        cin >> gdz;
        godzilla.push_back(gdz);  // taking powers of godzilla
        }

        for (int i = 0; i < numOfMgdz; i++){
            int mgdz;
            cin >> mgdz;
            megagodzilla.push_back(mgdz); // taking powers of godzilla
        }

        sort(godzilla.begin(), godzilla.end());
        sort(megagodzilla.begin(), megagodzilla.end());

        int g = 0;
        int m = 0;
        while (g < numOfGdz && m < numOfMgdz)
        {
            if (godzilla[g] < megagodzilla[m]){
                g++;
            }
            else{
                m++;
            }
        }

        if (g == numOfGdz){
            cout << "MechaGodzilla" << endl;
        }
        else{
            cout << "Godzilla" << endl;
        }
    }
}
