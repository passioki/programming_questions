#include<stdio.h>
int main(){
    
    /*
    1/1=1;
    -2/3'
    3/5;
    -4/7;
    5/9;
    -6/11;
    
    */
    
    int i;
    int N;
    double sum = 0.0;
    double sgn = 1.0;
    
    
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum += sgn*i *1.0/( 2.0*i - 1.0 );//在使用+=或者-=的时候，注意左边变量的类型；
        sgn = -sgn;//           如果左边为整形，那么结果也是整形，会将小数点舍去。
    }
    printf("%.3f",sum);
    return 0;
}

