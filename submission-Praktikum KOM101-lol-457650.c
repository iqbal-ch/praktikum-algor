#include<stdio.h>
int main()
{
    int N;
    long long int x;
    scanf("%d",&N);
    while(1<=N&&N<=100){
        scanf("%lld",&x);
        if(x<1000)
            printf("LEBIH KECIL\n");
        else
            printf("LEBIH BESAR ATAU SAMA DENGAN\n");

    N=N-1;

    }

return 0;
}
