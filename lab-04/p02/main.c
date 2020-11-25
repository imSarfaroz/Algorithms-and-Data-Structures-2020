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

    int s1 = 0;
    for (int i = 0; i < N; i++)
    {
        s1 += a[i];
    }
    printf("Sum of all elements is %d\n", s1);

    int s2 = 0;
    for (int *p = a;   p != &a[N]; ++p)
    {
        s2 += *p;
    }
    printf("Sum of all elements is %d\n", s1);
}