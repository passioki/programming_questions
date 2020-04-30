
#include<stdio.h>
#include<math.h>
int main(int argc ,char** argv){
    int num;
    /*
    123 % 10 = 3
    123 / 10 = 12
    cnt --;
    3 * pow(10,cnt)
    */
   int remainder;
    scanf("%d",&num);
    int a = num;
    double cnt = 0.0;
    while(a != 0){
        a /= 10;
        cnt++;
    }
    double mun = 0;
    while(num != 0){
        remainder = num % 10;
        num /= 10;
        //pow函数传入的参数和返回的值都是double！！！
        mun += remainder * pow(10.0,--cnt);
    }
    printf("%.0f",mun);
    
    
    return 0;
}