#pragma once
#include <cstddef>
#include <iostream>
#include <initializer_list>

class vecInt
{
    int *p;
    std::size_t sz;
    std::size_t cp;

public:
    using Iter = int *;
    using CIter = const int *;

    vecInt()
        : p(nullptr), sz(0), cp(0)
    {
    }

    vecInt(std::size_t n);

    // constructor with initializer_list
    vecInt(std::initializer_list<int> init);

    //copy constructor
    vecInt(const vecInt &other);

    //assignment operator
    vecInt &operator=(const vecInt &other);

    //move constructor
    vecInt(vecInt &&other) noexcept
        : p(other.p), sz(other.sz), cp(other.cp)
    {
        other.p = nullptr;
        other.sz = 0;
        other.cp = 0;
    }

    //move assignment
    vecInt &operator=(vecInt &&other) noexcept
    {
        if (this != &other)
        {
            delete[] p;
            p = other.p;
            sz = other.sz;
            cp = other.cp;
            other.p = nullptr;
            other.sz = 0;
            other.cp = 0;
        }

        return *this;
    }

    ~vecInt();

    void reserve(std::size_t newCp);
    Iter insert(Iter pos, int x);
    Iter erase(Iter pos);
    Iter erase(Iter first, Iter last);

    Iter begin()
    {
        return p;
    }

    Iter end()
    {
        return p + sz;
    }

    CIter begin() const
    {
        return p;
    }

    CIter end() const
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

    static std::size_t counter;
};

bool operator==(const vecInt &a, const vecInt &b);

inline bool operator!=(const vecInt &a, const vecInt &b)
{
    return !(a == b);
}