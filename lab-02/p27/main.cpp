#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++){
        int result = 0;

        int a = 1;
        int b = 1;
        
        while(cin >> b && b != 0){
                
                  if(b - (2 * a) > 0){
                   result += (b - (2 * a));
                }
                a = b;  
        }
        cout << result << endl;
    }
}