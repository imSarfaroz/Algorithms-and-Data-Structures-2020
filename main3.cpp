#include <iostream>

using namespace std;
void f(int x){
    x = 42;
}

int main()
{
    int x = 3;
    cout << x << "\n";
    f(x);
    cout << x << "\n";
}