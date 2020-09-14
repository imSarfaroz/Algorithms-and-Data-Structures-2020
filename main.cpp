#include <iostream>
#include <limits>
#include <cstdint>

using namespace std;

typedef long long llong;

int main(){
    cout << "int: " << sizeof(int) << " " << numeric_limits<int>::min() << " " << numeric_limits<int>::max() << "\n";
    cout << "long: " << sizeof(long) << " " << numeric_limits<long>::min() << " " << numeric_limits<long>::max() << "\n";
    cout << "long long: " << sizeof(long long) << " " << numeric_limits<long long>::min() << " " << numeric_limits<long long>::max() << "\n";
    cout << "bool: " << sizeof(bool) << " " << numeric_limits<bool>::min() << " " << numeric_limits<bool>::max() << "\n";
    cout << "double: " << sizeof(double) << " " << numeric_limits<double>::min() << " " << numeric_limits<double>::max() << "\n";
}