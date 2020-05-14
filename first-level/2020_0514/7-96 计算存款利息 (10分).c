#include<stdio.h>
#include<math.h>
int main(int argc ,char** argv){
    double money,year,rate;
    scanf("%lf %lf %lf",&money,&year,&rate);
    double interst;
    printf("interest = %.2f",money * pow((1 + rate),year) - money);
    return 0;
}