#include<stdio.h>
int main(int argc ,char** argv){
    int a = 5,b = 2,c = 1;
    int sum = 150;
    int n;
    int cnt = 0;
    scanf("%d",&n);
    for(int i = 1;i <= 30;i++){
        for(int j = 1;j < 75;j++){
            for(int k = 1;k < 150;k++){
                if(k + j + i == 100 && k * 1 + j * 2 + i * 5 == sum){
                    
                    cnt ++;
                    printf("%d %d %d\n",i,j,k);
                    if(cnt == n){
                        goto out;
                    }else{
                        ;
                    }
                }
            }
        }
    }
    out:
    return 0;
}