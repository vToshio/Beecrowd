#include <stdio.h>

int main(void)
{
    float A[100];
    int i=0;

    while (i<100) 
    {
        scanf("%f", &A[i]);
        i++;
    }
    
    for (i=0; i<100; i++) 
    {
        if (A[i] <= 10) printf("A[%d] = %.1f\n", i, A[i]);
    }

    return 0;
}