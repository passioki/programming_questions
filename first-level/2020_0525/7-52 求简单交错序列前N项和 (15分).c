#include<stdio.h>
int main(int argc ,char** argv){
    double n = 3;
    double power;

    scanf("%lf",&power);
    for(double i = 0;i <= power;i++){
        double j = i;
        double result = 1;
        while(j-- > 0){
             result *= n;
        }
        printf("pow(%.0f,%.0f) = %.0f\n",n,i,result);
    }
    return 0;
}
