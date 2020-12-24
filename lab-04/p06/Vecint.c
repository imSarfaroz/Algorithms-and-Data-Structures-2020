#include "Vecint.h"
#include <stdlib.h>

void vecInt_createOfSize(struct vecInt *This, int n, int initValue)
{
    This->p = (int *)malloc(sizeof(int) * n);
    This->sz = n;
    This->cp = n;

    for (size_t i = 0; i < This->sz; ++i)
    {
        This->p[i] = initValue;
    }
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

void vecInt_destroy(struct vecInt *This)
{
    free(This->p);
}