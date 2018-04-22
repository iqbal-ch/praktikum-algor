#include<stdio.h>
void genap(int x){
    int hasil;
    hasil=x%2;
    if (hasil==0)
        printf("1\n");
    else
        printf("0\n");
}
int main(){
    int x;
    scanf("%d",&x);
    genap(x);
return 0;
}
