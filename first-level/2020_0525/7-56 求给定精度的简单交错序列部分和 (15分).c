
#include<stdio.h>
int main(int argc ,char** argv){
    double flag = 1;
    double cnt = 0;
    double eps,sum = 0,last_item;
    scanf("%lf",&eps);
    do{
        last_item = 1.0 /( 1.0 + cnt * 3.0);
        sum += flag * last_item;
        cnt++;
        flag = - flag;
    }while(last_item > eps);
    printf("sum = %.6f",sum);

    return 0;
}

/*会超时*/
// #include<stdio.h>
// double denominator(double n);
// int main(int argc ,char *argv[]){
//     double eps;
//     scanf("%lf",&eps);
//     double cnt = 0;
//     double sum = 0;
//     double last_item;
//     int flag = 1;
//     do{
//         last_item = 1 / denominator(++cnt);
//         sum += flag * last_item;
//         flag = - flag;
//     }while(last_item > eps);
//     printf("sum = %.6f",sum);
//     return 0;
// }

// double denominator(double n){
//     double result;
//     if(n == 1){
//         result = 1;
//         return result;
//     }else{
//         result = denominator(n - 1) + 3;
//     }
//     return result;
// }
