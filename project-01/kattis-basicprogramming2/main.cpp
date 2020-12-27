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

    if (t == 1)
    {
        bool isTrue = false;
        for (auto e : numbers)
        {
            if (binary_search(numbers.begin(), numbers.end(), 1000 - e))
            {
                isTrue = true;
            }
        }
        cout << (isTrue ? "Yes" : "No") << endl;
    }
    else if (t == 2)
    {
        for (int i = 1; i < N; i++)
        {
            if (numbers[i - 1] == numbers[i])
            {
                cout << "Contain dulicate" << endl;
            }
        }
        cout << "Unique" << endl;

        // if t = 3
        // if t = 4
    }
}