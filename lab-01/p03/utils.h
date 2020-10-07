#pragma once

template <typename T>
void auSwap(T &a, T &b)
{
    T t = std::move(a);
    a = std::move(b);
    b = std::move(t);
}