#include<stdio.h>
void pola(int n) {
   int i, j;
   for (i=1; i<=n; i++) {
      for (j=1; j<=i; j++)
         printf("*");
      printf("\n");
   }
}
int main(){
    int n;
    scanf("%d",&n);
    pola(n);

    return 0;
}
