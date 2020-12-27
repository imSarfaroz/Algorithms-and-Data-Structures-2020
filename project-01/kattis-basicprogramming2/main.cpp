#include <iostream>
#include <algorithm>
#include <vector>

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
            if (binary_search(numbers.begin(), numbers.end(), 7777 - e))
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
    }
    else if (t == 3)
    {
        int result = -1;
        for (int i = 0; i < (N % 2 == 0 ? N / 2 : N / 2 + 1); i++)
        {
            if (numbers[i] == numbers[i + N / 2])
            {
                result = numbers[i];
                break;
            }
        }
        cout << result << endl;
    }
    else if (t == 4)
    {
        int m = N / 2;
        if (numbers.size() % 2 != 0)
        {
            cout << numbers[m] << endl;
        }
        else
        {
            cout << numbers[m - 1] << " " << numbers[m] << endl;
        }
    }
    else
    {
        bool blank = false;
        auto p = lower_bound(numbers.begin(), numbers.end(), 100);
        auto q = upper_bound(numbers.begin(), numbers.end(), 999);
        for (auto i = p; i < q; i++)
        {
            cout << blank << *i;
            blank = true;
        }
        cout << endl;
    }
}