#include<stdio.h>
double fact(double n);
int main(int argc ,char** argv){
    double x;
    scanf("%lf",&x);
    double sum = 0;
    double cnt = 0;
    double last_item;
    do{
        last_item = pow(x,cnt)/fact(cnt);
        sum += last_item;
        cnt++;
    }while(last_item >= 0.00001);
    printf("%.4f",sum);

    return 0;
}
double fact(double n){ // 递归方法求阶乘
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return n;
    }else{
        n--;
        n = fact(n) * (n+1);
    }
    return n;
}
