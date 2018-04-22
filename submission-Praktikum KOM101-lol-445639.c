#include <stdio.h>
int main()
{
    float r,L,K;

    scanf("%f",&r);

    L = 3.14*r*r;
    K = 2*3.14*r;

    printf("%.2f %.2f\n", L, K);

    return 0;
}
