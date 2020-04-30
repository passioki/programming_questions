#include<stdio.h>
int main(int argc,char **argv){
    int n;
    int min;
    int cnt = 0;
    do{
        int a;
        scanf("%d",&a);

        cnt++;//添加计数器用来给min赋初值
        if(cnt == 1){
            n = a;//将要输入多少个整数
        }else if(a < min || cnt == 2){
            min = a;
        }else{
            ;
        }
    }while(n--);
    printf("min = %d",min);
    return 0;
}