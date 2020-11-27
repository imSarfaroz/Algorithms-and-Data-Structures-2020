#pragma once

template <typename T>
void auSwap(T &a, T &b)
{
    T t = std::move(a);
    a = std::move(b);
    b = std::move(t);
}

template <typename Iter, typename T>
Iter auFind(Iter beg, Iter end, const T &v)
{
    while (beg != end)
    {
        if (*beg == v)
        {
            return beg;
        }
        ++beg;
    }
    return end;
}

template <typename Iter, typename Predicate>
Iter auFindIf(Iter beg, Iter end, Predicate p)
{
    while (beg != end)
    {
        if (p(*beg))
        {
            return beg;
        }
        ++beg;
    }
    return end;
}

// template <typename Iter> 
// Iter auMinElement(Iter beg, Iter end)
// {
//     if(beg == end)
//     {
//         return end;
//     }
//     Iter res = beg++;
//     while(beg != end)
//     {
//         if(*beg < *res)
//         {
//             res = beg;
//         }
//         beg++;
//     }
//     return res;
// }

template <typename Iter, typename Predicate>
Iter auMinElement(Iter beg, Iter end, Predicate p)
{
    if (beg == end)
    {
        return end;
    }
    Iter res = beg++;
    while (beg != end)
    {
        if (p(*beg, *res))
        {
            res = beg;
        }
        beg++;
    }
    return res;
}

template<typename Iter, typename Predicate>
void auSelectSort(Iter beg, Iter end, Predicate p)
{
    while (beg != end)
    {
        Iter iterToMin = auMinElement(beg, end, p);
        auSwap(*beg, *iterToMin);
        ++beg;
    }

}