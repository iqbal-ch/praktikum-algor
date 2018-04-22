#include<stdio.h>
int main()
{
    int a,b,c,d;
    double x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x= 1.0*a*1.0*b+c/2.0+d;
    printf("%.2lf\n",x);
return 0;
}
