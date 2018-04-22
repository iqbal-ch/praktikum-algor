#include<stdio.h>
int main()
{
    int a,b,c,d;
    double x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x= 1.0*a*b*1.0/2.0+c*1.0*d*1.0;
    printf("%.2lf\n",x);
return 0;
}
