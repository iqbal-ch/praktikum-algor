#include<stdio.h>
void pola(int n) {
   int i, j, k;
   for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
            {
                printf(" ");
            }
        for(k=1;k<=i;k++)
            {
                printf("*");
            }
        printf("\n");
}
}
int main(){
    int n;
    scanf("%d",&n);
    pola(n);

    return 0;
}
