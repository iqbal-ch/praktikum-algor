#include<stdio.h>
void luaslingkaran(double r){
    double luas;
    luas = 3.14*r*r;
    printf("%.2lf\n",luas);
}
int main(){
    double r;
    scanf("%lf",&r);
    luaslingkaran(r);
return 0;
}
