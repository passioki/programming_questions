
#include<stdio.h>
int main(int argc ,char** argv){
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= i;j++){
            printf("%d*%d=%-4d",j,i,j*i); 
            //如果用\t来控制占位，那么再使用\n的话，会把\t的效果覆盖
            // printf("%d*%d=%d\t\n",j,i,j*i); 
        }
        printf("\n");
    }
    return 0;
}