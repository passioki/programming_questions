#include<stdio.h>

double fact(int n);

int main(int argc ,char** argv){
    
    double result;
    int m,n;
    scanf("%d %d",&m,&n);
    result = fact(n) / (fact(m) * fact(n - m));
    printf("result = %.0f",result);
    // printf("%.0f",fact(0));
    return 0;
}

double fact(int n){     //0的阶乘是1
    int i = n - 1;
    if(n == 0){
        n = 1;
    }else{
        while(i > 0){
        n *= i;
        i--;
        }
    }
    
    return n;
}