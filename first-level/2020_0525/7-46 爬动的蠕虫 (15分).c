#include<stdio.h>
int main(int argc ,char** argv){
    int N,U,D;
    scanf("%d %d %d",&N,&U,&D);
    int height = 0,cnt = 0;
    while(1){
        cnt++;
        height += U;
        if(height >= N){
            break;
        }else{
            cnt++;
            height -= D;
        }
    }
    printf("%d",cnt);
    return 0;
}
