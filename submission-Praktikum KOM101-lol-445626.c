#include <stdio.h>

int main()
{
    long int bil1;
    double x,bil2;
    scanf("%lf", &x);
    bil1 = x/1;
    bil2 = x - bil1;
    printf("%ld %.5lf\n", bil1, bil2);
    return 0;
}
