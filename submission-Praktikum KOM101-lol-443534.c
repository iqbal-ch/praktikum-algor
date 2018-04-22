#include<stdio.h>
int main()
{
    int x,tahun,bulan;
    scanf("%d",&x);
    tahun=x/12;
    bulan=x%12;
    printf("%d %d\n",tahun,bulan);
    return 0;
}
