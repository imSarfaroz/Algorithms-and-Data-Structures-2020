#include <iostream>
#include <string>
#include <utility>
#include <tuple>

using namespace std;

// int main()
// {
//     pair<string, double> p = {"StudentA"s, 3.7};
//     auto q = make_pair("StudentA"s, 3.7);
//     auto r = make_pair("StudentB"s, 3.5);
//     auto t = make_pair("StudentB"s, 3);

//     cout << boolalpha;
//     cout << p.first << " " << p.second << endl;
//     cout << (p == q) << endl;
//     cout << (p < r) << endl;
//     cout << (r < q) << endl;
//     cout << (r > t) << endl;
// }

int main()
{
    tuple<string, int, double> t = {"EmpoyeeA"s, 1980, 30000.23};

    get<2>(t) += 1000;
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
}