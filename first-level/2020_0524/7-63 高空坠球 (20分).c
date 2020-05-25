#include<stdio.h>
int main(int argc ,char** argv){
    double height,n;
    double sum = 0;
    scanf("%lf %lf",&height,&n);
    do{
        sum += height;
        height /= 2;
        if(n == 1){
            printf("%.1f %.1f",sum,height);
            break;
        }else if(n == 0){
            sum = 0;
            height = 0;
            printf("%.1f %.1f",sum,height);
            break;
        }else{
            sum += height;
        }
    }while(--n);
    
    return 0;
}