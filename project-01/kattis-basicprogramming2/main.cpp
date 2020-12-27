#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, t;
    cin >> N >> t;

    vector<int> numbers(N);

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());

}