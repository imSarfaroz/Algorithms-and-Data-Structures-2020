#include <stdio.h>

#define N 10

int main(void)
{
    int a[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    // pointer arithmetic
    for (int *p = &a[0]; p != a + N; ++p)
    {
        printf("%d ", *p);
    }
    printf("\n");
}