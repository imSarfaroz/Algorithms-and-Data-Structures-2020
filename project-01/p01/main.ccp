#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int M;

int main()
{
    int N;

    vector<int> numbers(100); //storing numbers

    while (cin >> N >> M, cout << N << ' ' << M << "\n", N) // 15  3
    {
        for (int i = 0; i < N; i++)
        {
            cin >> numbers[i]; // taking numbers
        }

        sort(numbers.begin(), numbers.begin() + N, ?);

        for (int i = 0; i < N; i++)
        {
            cout << numbers[i] << 'n';
        }
    }
}
