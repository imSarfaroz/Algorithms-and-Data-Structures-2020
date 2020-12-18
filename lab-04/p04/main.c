#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 7

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

int main(void)
{
    int n;
    scanf("%d", &n);

    //a - dynamic array
    int *a = (int *)malloc(sizeof(int) * n);
    if (a == NULL)
    {
        printf("Not enough dynamic memory\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printArray(a, n);

    reverse(a, a + n);

    printArray(a, n);

    free(a);
}