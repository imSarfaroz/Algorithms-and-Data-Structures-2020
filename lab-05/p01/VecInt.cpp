#include "VecInt.hpp"
#include "../../libs/utils.hpp"

std::size_t vecInt::counter = 0;


vecInt::vecInt(size_t n)
    : p(new int[n]), sz(n), cp(n)
{
    for (size_t i = 0; i < sz; i++)
    {
        p[i] = 0;
    }
}

vecInt::vecInt(std::initializer_list<int> init)
    : p(new int[init.size()]), sz(init.size()), cp(init.size())
{
    auCopy(init.begin(), init.end(), p);
}

//copy constructor
vecInt::vecInt(const vecInt &other)
    : p(new int[other.sz]), sz(other.sz), cp(other.sz)
{
    counter += other.size(); 
    auCopy(other.begin(), other.end(), p);
    // for (size_t i = 0; i < sz; i++)
    // {
    //     p[i] = other.p[i];
    // }
}

// constructor -> distractor -> assignment operator
vecInt &vecInt::operator=(const vecInt &other)
{
    if (this != &other)
    {
        counter += other.size();
        int *newP = new int[other.sz];
        auCopy(other.begin(), other.end(), newP);

        // for (size_t i = 0; i < other.sz; i++)
        // {
        //     newP[i] = other.p[i];
        // }

        delete[] p; //release
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
