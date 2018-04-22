#include<stdio.h>
void konfersi(double suhu){
    double reamur;
    reamur=4.0/5.0*suhu;
    printf("%.2lf\n",reamur);
}
int main(){
    double suhu;
    scanf("%lf",&suhu);
    konfersi(suhu);
return 0;
}

