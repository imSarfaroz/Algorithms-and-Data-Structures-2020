#include <iostream>

using namespace std;

main()
{
    int n;
    cin >> n;

    int a = 1;
    
    for (int i = 0; i < n; i++){
        a *= 2;
    }
    cout << (a + 1) * (a + 1) << "\n";
}


