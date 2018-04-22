#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,x;
    scanf("%lld",&x);
    a=x/100000;
    x=x%100000;
    b=x/50000;
    x=x%50000;
    c=x/10000;
    x=x%10000;
    d=x/5000;
    x=x%5000;
    e=x/2000;
    x=x%2000;
    x=x/1000;
    printf("%lld %lld %lld %lld %lld %lld\n",a,b,c,d,e,x);
    return 0;

}
