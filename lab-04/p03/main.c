#include <stdio.h>

#define N 10
#define M 7

void printArray(int *p, int n)
{
    for (int *q = p + n; p < q; ++p)
    {
        // printf("%d", *(p + i))
        printf("%d", *p);
    }
    printf("\n");
}

int main(void)
{
    int a[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int b[M];
    for (int i = 0; i < M; ++i)
    {
        scanf("%d", &b[i]);
    }

    printArray(a, N);
    printArray(b, M);
}