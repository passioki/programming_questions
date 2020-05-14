
#include<stdio.h>
#include<math.h>

double sum(int i,int n);

int main(int argc ,char** argv){
    int n;
    scanf("%d",&n);
    //不要用pow！！！我改了以后就不超时了
    // double min = pow(10,n-1),max = pow(10,n);
    int min = 1,max = 1;
    for(int i = 0;i < n - 1;i++){
        min *= 10;
    }
    for(int i = 0;i < n;i++){
        max *= 10;
    }
    for(int i = min;i < max;i++){
        
        if(sum(i,n) == i){//这儿有个函数
            printf("%d\n",i);
        }else;
    }

    return 0;
}
double sum(int i,int n){
    int j = i,remainder;
    double sum = 0;
    while(j != 0){
        remainder = j % 10;
        int m = n;
        int bottle = 1;
        while(m--){//计算每位数的n次方
            bottle *= remainder;
        }
        sum += bottle;//把每位数的n次方加起来
        bottle = 1;

        j /= 10;
    }
    return sum;
}



// #include<stdio.h>
// #include<math.h>
// int main(int argc ,char** argv){
//     int n;
//     scanf("%d",&n);
//     double min = pow(10,n-1),max = pow(10,n);
//     for(int i = min;i < max;i++){
//         int j = i,remainder;
//         double sum = 0;
//         while(j != 0){
//             remainder = j % 10;
//             sum += pow(remainder,n);
//             j /= 10;
//         }
//         if(sum == i){
//             printf("%d\n",i);
//         }else;
//     }

//     return 0;
// }

//pow的传入参数和返回值都是double！计算时要注意类型！另外大量运用pow函数回事程序运行变慢，尽量少用或者不用。
// #include<stdio.h>
// #include<math.h>
// int main(int argc ,char** argv){
//     int n;
//     scanf("%d",&n);
//     printf("%d",pow(10,n-1));

//     return 0;
// }
