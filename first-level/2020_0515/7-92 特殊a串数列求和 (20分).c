#include<stdio.h>
int main(int argc ,char** argv){
    int a,n;
    scanf("%d %d",&a,&n);
    int sum = 0,b = a;
    for(int i = 0;i < n;a = a * 10 + b,i++){
        sum += a;
    }
    printf("s = %d",sum);
    return 0;
}