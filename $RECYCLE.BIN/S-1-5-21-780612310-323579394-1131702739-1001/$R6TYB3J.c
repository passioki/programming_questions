#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int x = 0,y = 0;
    int state = 0;//尚未有解
    while(x < N/2){
        for(x++;y< N/2;y++){
            if(x*x + y*y == N && y > x){
                printf("%d %d\n",x,y);
                state = 1;//有解
            }else{
                ;
            }
        }
        y = 0;
    }

    if(state == 0){
        printf("No Solution");
    }else{
        ;
    }
    


    return 0;
}