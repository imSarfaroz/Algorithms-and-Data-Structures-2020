#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Freq
{
    char letter;
    int count;

    Freq(char aLetter, int aCount)
        : letter(aLetter), count(aCount)
    {
    }
};

int main()
{
    int nTest;
    cin >> nTest;

    for (int caseN = 1; caseN <= nTest; caseN++)
    {
        int R, C, M, N;
        cin >> R >> C >> M >> N;

        vector<Freq> vec;
        vector<int> counter(100, 0); //  filling the counter vector with the number frequencies

        for (int j = 0; j < R; j++)
        {
            string str;
            cin >> str;
            for (auto i : str)
            {
                counter[i]++;
            }
        }

        //filling the vector
        for (int i = 0; i < counter.size(); i++)
        {
            if (counter[i] != 0)
            {
                vec.push_back(Freq(i, counter[i]));
            }
        }
        // sorting by descent number
        sort(vec.begin(), vec.end(), [](Freq x, Freq y) {
            return y.count < x.count;
        });

        int maxN = vec[0].count;

        int result = M * maxN;

        for (int i = 1; i < vec.size(); i++)
        {
            if (vec[i].count == maxN)
            {
                result += M * maxN;
            }
            else
            {
                result += N * vec[i].count;
            }
        }
        cout << "Case " << caseN << ": " << result << endl;
    }
}