
#include<stdio.h>
int main(int argc ,char** argv){
    int num;
    scanf("%d",&num);
    int cnt = 0;
    int max = num + 3;
    for(int  i = num;i <= max;i++){
        for(int  j = num;j <= max;j++){
            for(int  k = num;k <= max;k++){
                if(i != j && j != k && i != k){
                    cnt ++;
                    printf("%d%d%d",i,j,k);
                    if(cnt < 6){
                        printf(" ");
                    }else{
                        printf("\n");
                        cnt = 0;
                    }
                }else;
            }
        }
    }
    return 0;
}