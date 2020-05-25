// #include<stdio.h>

// double fact(int n);

// int main(int argc ,char** argv){
    
//     double result;
//     int m,n;
//     scanf("%d %d",&m,&n);
//     result = fact(n) / (fact(m) * fact(n - m));
//     printf("result = %.0f",result);
//     // printf("%.0f",fact(0));
//     return 0;
// }

// double fact(int n){     //0的阶乘是1
//     int i = n - 1;
//     if(n == 0){
//         n = 1;
//     }else{
//         while(i > 0){
//         n *= i;
//         i--;
//         }
//     }
    
//     return n;
// }

/*上个答案数据大时会溢出，而题目要求结果不超过double范围;感谢PTA中的穹顶之上给我的解答！*/

#include<stdio.h>


double fact(int n);

int main(int argc ,char** argv){
    
    double result;
    int m,n;
    scanf("%d %d",&m,&n);
    result = fact(n) / (fact(m) * fact(n - m));
    printf("result = %.0f",result);

    return 0;
}
double fact(int n){
    double sum = 1;
    for(int i = 1;i <= n;i++){
        sum *= i;
    }
    return sum;
}
