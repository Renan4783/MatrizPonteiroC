#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int x, y, n, i, j, c=0;
    int *vet;
    scanf("%d", &x);
    scanf("%d", &y);
    n=x*y;
    vet=malloc(n*sizeof(int));
    for (i=0; i<n; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (i=0; i<x; i++)
    {
        for (j=0; j<y; j++)
        {
            printf("%d", *(vet+c));
            c++;
        }
        printf("\n");
    }
    return 0;
}
