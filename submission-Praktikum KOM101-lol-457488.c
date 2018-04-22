#include<stdio.h>
int main()
{
    int N;
    unsigned long long int a,b;
    scanf("%d",&N);
    while(1<=N&&N<=100){
        scanf("%llu",&a);
        b=a%3;
        if (b!=0)
            printf("TIDAK HABIS DIBAGI\n");
        else
            printf("HABIS DIBAGI\n");
    N=N-1;
}
return 0;
}

