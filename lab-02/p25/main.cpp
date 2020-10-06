#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int num2;
    int c = 1;
  

    while(cin >> num){

        int finalMax = -100000000;
        int finalMin = 10000000; 

        for (int i = 0; i < num; i++){
            cin >> num2;

            finalMax = std::max(num2, finalMax);
            finalMin = std::min(finalMin, num2);
        }

        cout << "Case " << c << ": " << finalMin << " " << finalMax << " " << (finalMax - finalMin) << endl;
        c++;
    }
}