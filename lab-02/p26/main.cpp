#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++){
        int c;
        std::int64_t a;
        std::int64_t b;

        cin >> a >> b >> c;
        int result = 0;

        while(a <= c){
            a *= b;
            result++;
        }
        cout << result << endl;
    }
}