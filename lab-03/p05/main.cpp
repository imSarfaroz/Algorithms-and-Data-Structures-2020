#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char numbers[2000000];
    int MIN, MAX;
    int numCase = 1;
    long int len;

    while(cin >> numbers)
    {

        //vector<char> nums(numbers);

        int numofCases;
        cin >> numofCases;
        cout << "Case " << numCase++ << ":" << endl;

        int isTrue = 0;

        len = strlen(numbers);
        if (len == 0)
            break;

        while(numofCases--){
            int i, j;
            cin >> i >> j;
            MIN = min(i, j); // 0
            MAX = max(i, j); // 5

            for (int d = MIN + 1; d <= MAX; d++){
                if(numbers[MIN] == numbers[d]){
                    isTrue = 0;
                }else{
                    isTrue = 1;
                    break;
                }
            }
            
            if(isTrue == 0){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
             }
        }
    }
}