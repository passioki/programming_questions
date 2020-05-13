#include<stdio.h>
int main(int argc ,char** argv){
    int num;
    scanf("%d",&num);
    int cnt = 0;
    if(num >= 0){
        while(num != 0){
            num /= 2;
            cnt++;
        }
        printf("%d",32 - cnt);
    }else{
        printf("0");
    }
    
    return 0;
}