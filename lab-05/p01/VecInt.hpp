#pragma once
#include <cstddef>
#include <iostream>

class vecInt
{
    int *p;
    std::size_t sz;
    std::size_t cp;

public:
    vecInt()
        : p(nullptr), sz(0), cp(0)
    {
    }

    vecInt(std::size_t n);

    //copy constructor
    vecInt(const vecInt &other);

    //assignment operator
    vecInt &operator=(const vecInt &other);

    ~vecInt();

    int *begin() const
    {
        return p;
    }

    int *end() const
    {
        return p + sz;
    }

    std::size_t size() const
    {
        return sz;
    }

    int &operator[](std::size_t index)
    {
        return p[index];
    }

    const int &operator[](std::size_t index) const
    {
        return p[index];
    }

    void pushBack(int x);
};

bool operator==(const vecInt &a, const vecInt &b);


inline bool operator!=(const vecInt &a, const vecInt &b)
{
    return !(a == b);
}