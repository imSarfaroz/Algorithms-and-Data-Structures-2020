#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct KingsPokerHands
{
    int a, b, c;

    KingsPokerHands(int aA, int aB, int aC)
        : a(aA), b(aB), c(aC) {}
};

int main()
{
    iostream::sync_with_stdio(false);

    vector<KingsPokerHands> hands;
    for (int i = 0; i < 52; i++)
    {
        for (int j = i + 1; j < 52; ++j)
        {
            for (int k = j + 1; k < 52; ++k)
            {
                int r1 = i % 13;
                int r2 = j % 13;
                int r3 = k % 13;
                if(r1 == r2 || r1 == r3 || r2 == r3)
                {
                    hands.emplace_back(r1 + 1, r2 + 1, r3 + 1);
                }
            }
        }
    }
    sort(hands.begin(), hands.end());

    for (int a, b, c; cin >> a >> b >> c && a + b + c > 0;)
    {
        KingsPokerHands h(a, b, c);

        if(!binary_search(hands.begin(), hands.end(), h))
        {
            cout << hands.front() << "\n";
        }
        else if(h == hands.back())
        {
            cout << "\n";
        }
        else 
        {
            cout << *upper_bound(hands.begin(), hands.end(), h) << "\n";
        }
    }
}