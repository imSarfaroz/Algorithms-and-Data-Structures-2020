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
        reserve(sz == 0 ? 1 : cp * 2);
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
}

void vecInt::reserve(std::size_t newCp)
{
    if (newCp <= cp)
    {
        return;
    }

    int *newP = new int[newCp];

    auCopy(p, p + sz, newP);

    delete[] p;
    p = newP;
    cp = newCp;
}

vecInt::Iter vecInt::insert(Iter pos, int x)
{
    std::size_t index = pos - p;

    if (sz == cp)
    {
        reserve(sz == 0 ? 1 : 2 * cp);
    }

    for (std::size_t i = sz; i > index; --i)
    {
        p[i] = p[i - 1];
    }

    p[index] = x;
    ++sz;

    return p + index;
}

vecInt::Iter vecInt::erase(Iter first, Iter last)
{
    auCopy(last, end(), first);

    sz -= last - first;

    return first;
}

vecInt::Iter vecInt::erase(Iter pos)
{
    std::size_t index = pos - p;

    for (std::size_t i = index + 1; i < sz; i++)
    {
        p[i - 1] = p[i];
    }

    --sz;

    return p + index;
}