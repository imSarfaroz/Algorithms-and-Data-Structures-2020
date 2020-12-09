#include <stdio.h>
#include <stdlib.h>

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

struct vecInt
{
    int *p;
    size_t sz;
    size_t cp;
};

void vecInt_createOfSize(struct vecInt *This, int n)
{
    This->p = (int *)malloc(sizeof(int) * n);
    This->sz = n;
    This->cp = n;
}

void vecInt_createEmpty(struct vecInt *This)
{
    This->p = NULL;
    This->sz = 0;
    This->cp = 0;
}

void vecInt_pushBack(struct vecInt *This, int x)
{
    if (This->sz == This->cp)
    {
        int newCp = This->sz == 0 ? 1 : This->cp * 2;
        int *q = (int *)malloc(sizeof(int) * newCp);
        for (int i = 0; i < This->sz; i++)
        {
            q[i] = This->p[i];
        }
        free(This->p);
        This->p = q;
        This->cp = newCp;
    }
    This->p[This->sz] = x;
    ++This->sz;
}

void problem04()
{
    struct vecInt v;

    int n;
    scanf("%d", &n);

    vecInt_createOfSize(&v, n);

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

    free(v.p);
}

int main(void)
{
    problem04();
}