#include "VecInt.hpp"

vecInt::vecInt(size_t n)
    : p(new int[n]), sz(n), cp(n)
{
    for (size_t i = 0; i < sz; i++)
    {
        p[i] = 0;
    }
}

//copy constructor
vecInt::vecInt(const vecInt &other)
    : p(new int[other.sz]), sz(other.sz), cp(other.sz)
{
    for (size_t i = 0; i < sz; i++)
    {
        p[i] = other.p[i];
    }
}

vecInt &vecInt::operator=(const vecInt &other)
{
    if (this != &other)
    {
        int *newP = new int[other.sz];
        for (size_t i = 0; i < other.sz; i++)
        {
            newP[i] = other.p[i];
        }
        delete[] p;
        p = newP;
        sz = other.sz;
        cp = other.sz;
    }
    return *this;
}

vecInt::~vecInt()
{
    std::cout << "~vecInt()" << std::endl;
    delete[] p;
}

void vecInt::pushBack(int x)
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

bool operator==(const vecInt &a, const vecInt &b)
{
    if (a.size() != b.size())
    {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
};
