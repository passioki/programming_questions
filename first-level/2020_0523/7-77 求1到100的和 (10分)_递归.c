#include<stdio.h>

int sum(int n);

int main(int argc ,char** argv){
    int n;
    scanf("%d",&n);
    printf("sum = %d",sum(n));
    return 0;
}

int sum(int n){
    
    int result;
    
    if(n == 1){ //确定递归出口
        result = n;
    }else{ //确定递归式
        n--;
        result = sum(n) + n + 1;
    }
    return result;
}