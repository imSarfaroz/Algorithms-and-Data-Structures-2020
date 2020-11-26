#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int N = 1;
int M = 1;

struct SORT
{
    int a;
    int b;

    SORT(int num1, int num2)
        : a(num1), b(num2)
    {
    }
};

// bool SORT(int a, int b)
// {
//     if(a % M != b % M)
//     {
//         return a % b
//     }
// }

int main()
{
    vector<SORT> numbers(100); //storing numbers

    while (N != 0 && M != 0) // 15  3
    {
        cin >> N >> M;
        for (int i = 0; i < N; i++)
        {
            cin >> numbers[i]; // taking numbers
        }

        sort(numbers.begin(), numbers.begin() + N, [](const SORT &s1, const SORT &s2) { if (s1.a % s2.b)
            {
                return s1.a % M < s2.b % M;
            } });

        cout << N << " " << M << endl;
    }
}
