#ifndef VECINT_H
#define VECINT_H

#include <stddef.h>

struct vecInt
{
    int *p;
    size_t sz;
    size_t cp;
};

void vecInt_createOfSize(struct vecInt *This, int n, int initValue);

void vecInt_createEmpty(struct vecInt *This);

void vecInt_pushBack(struct vecInt *This, int x);

void Vecint_destroy(struct VecInt This);

#endif