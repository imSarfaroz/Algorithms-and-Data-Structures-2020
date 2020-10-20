#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    char numbers[2000000];
    int MIN, MAX;
    int numCase = 1;
    bool isTrue = true;

    while(cin >> numbers)
    {
        //vector<char> nums(numbers);

        int numofCases;
        cin >> numofCases;
        cout << "Case " << numCase++ << ":" << endl;

        while(numofCases--){
            int i, j;
            cin >> i >> j;
            MIN = min(i, j); // 0
            MAX = max(i, j); // 5

            for (int d = MIN + 1; d < MAX; d++){
                if(numbers[MIN] == numbers[d]){
                    isTrue = true;
                }else{
                    isTrue = false;
                    break;
                }
            }
            
            if(isTrue){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
             }
        }
    }
}