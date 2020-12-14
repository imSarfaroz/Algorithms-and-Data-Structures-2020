#include "VecInt.hpp"


    VecInt::vecInt(std::size_t n)
        : p(new int[n]), sz(n), cp(n)
    {
        for (int i = 0; i < sz; i++)
        {
            p[i] = 0;
        }
    }

    VecInt::~vecInt()
    {
        std::cout << "~vecInt()" << std::endl;
        delete[] p;
    }

       void VecInt::pushBack(int x)
    {
        if (sz == cp)
        {
            std::size_t newCp = sz == 0 ? 1 : cp * 2;
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
