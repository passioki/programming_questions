#include<stdio.h>
double fact(double n);
int main(int argc ,char** argv){
    double n;
    scanf("%lf",&n);
    
    double sum = 0;
    do{
        sum += 1.0 / fact(n);
    }while(--n >= 0);
    printf("%.8f",sum);
    return 0;
}
double fact(double n){
    double result;
    if(n == 1 || n == 0){
        result = 1;
        return result;
    }else{
        result = fact(n - 1) * n;
    }
    return result;
}