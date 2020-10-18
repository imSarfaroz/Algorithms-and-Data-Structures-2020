#include "../../libs/strUtils.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<vector<string>> data = {
        {"Hello", "World", "!!!"},
        {"Hello", "World"}, 
        {"Hello"},
        {},
        {"Hello", "World", "Again", "!!!"}};

    for (const auto &v : data)
    {
        cout << join(v) << "\n";
    }
}
