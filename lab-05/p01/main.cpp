#include "../../libs/utils.hpp"
#include <iostream>
 
using namespace std;

class vecInt
{
    int *p;
    size_t sz;
    size_t cp;

public:
    vecInt()
        : p(nullptr), sz(0), cp(0)
    {
    }

    vecInt(size_t n)
            :p(new int[n]), sz(n),cp(n)
            {
                for (int i = 0; i < sz; i++)
                {
                    p[i] = 0;
                }
            }

            int *begin() const
            {
                return p;
            }

            int *end() const
            {
                return p + sz;
            }

            size_t size() const
            {
                return sz;
            }

            int &operator[](size_t index)
            {
                return p[index];
            }

            const int &operator[](size_t index) const  
            {
                return p[index];
            }

            void pushBack(int x)
            {
                if (sz == cp)
                {
                    size_t newCp = sz == 0 ? 1 : cp * 2;
                    int *q = new int[newCp];
                    for (int i = 0; i < sz; i++)
                    {
                        q[i] = p[i];
                    }
                    delete[] p;
                    p = q;
                    cp = newCp;
                }
                p[sz] = x;
                ++sz;
            }
};

void problem04()
{   
    int n;
    cin >> n;

    vecInt v(n);

    for (size_t i = 0; i < v.size(); ++i)
    {
        cin >> v[i];
    }

    v.pushBack(42);

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << endl;

    auReverse(v.begin(), v.end());

    for (int e : v)
    {
        cout << e << " ";
    }
    cout << endl;
}

    void problem05()
    {
        vecInt v;

        for (int x; cin >> x;)
        {
            v.pushBack(x);
        }

        for (int e : v)
        {
            cout << e << " ";
        }
        cout << endl;

        auReverse(v.begin(), v.end());

        for (int e : v)
        {
            cout << e << " ";
        }
        cout << endl;

        //free(v.p);
}

int main(void)
{
    problem04();
}