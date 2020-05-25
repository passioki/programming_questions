#include<stdio.h>
int main(int argc ,char** argv){
    int m,n,perfect_num,state = 0;
    scanf("%d %d",&m,&n);
    for(int i = m;i <= n;i++){
        int sum = 0;
        for(int j = 1;j <= i/2;j++){
            if(i % j == 0){
                sum += j;
            }else;
        }
        if(sum == i){
            perfect_num = i;
            state = 1;
            printf("%d = 1",perfect_num);
            for(int k = 2;k <= perfect_num/2;k++){
                if(perfect_num % k == 0){
                    printf(" + %d",k);
                }else;
            }
            printf("\n");
        }else;
    }
    if(state == 0){
        printf("None");
    }
    return 0;
}
/*
6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 7 + 14
*/
