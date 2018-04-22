#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
while(x>1){
    printf("Anak ayam turun %d, mati 1 tinggal %d\n",x,x-1);
    x--;
}
printf("Anak ayam turun 1, mati 1 tinggal induknya\n");
return 0;
}
