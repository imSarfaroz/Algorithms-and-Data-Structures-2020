#include <stdio.h>
#include <stdlib.h>
#include "Vecint.h"

void printArray(int *p, int n)
{
    for (int *q = p + n; p < q; ++p)
    {
        // printf("%d", *(p + i))
        printf("%d ", *p);
    }
    printf("\n");
}

void reverse(int *beg, int *end)
{
    for (;;)
    {
        if (beg == end)
            break;

        --end;

        if (beg == end)
        {
            break;
        }

        //swap
        int t = *beg;
        *beg = *end;
        *end = t;

        ++beg;
    }
}

void problem04()
{
    struct vecInt v;

    int n;
    scanf("%d", &n);

    vecInt_createOfSize(&v, n, 0);

    for (int i = 0; i < v.sz; ++i)
    {
        scanf("%d ", &v.p[i]);
    }

    vecInt_pushBack(&v, 42);
    printArray(v.p, v.sz);

    reverse(v.p, v.p + v.sz);

    printArray(v.p, v.sz);

    free(v.p);
}

void problem05()
{
    struct vecInt v;

    vecInt_createEmpty(&v);

    int x;
    while (scanf("%d", &x) == 1)
    {
        vecInt_pushBack(&v, x);
    }

    printArray(v.p, v.sz);

    reverse(v.p, v.p + v.sz);

    printArray(v.p, v.sz);

    Vecint_destriy(&v);
}

int main(void)
{
    problem04();
}