#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 7

void printArray(int *p, int n)
{
    int *q = p + n;
    for (int *q = p + n; p < q; ++p)
    {
        // printf("%d", *(p + i))
        printf("%d", *p);
    }
    printf("\n");
}

int main(void)
{
    int n;
    scanf("%d", &n);

    //a - dynamic array
    int *a = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printArray(a, n);

    free(a);
}