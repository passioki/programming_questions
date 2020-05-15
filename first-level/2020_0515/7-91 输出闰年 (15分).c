#include<stdio.h>
int main(int argc ,char** argv){
    int year,year0 = 2001;
    scanf("%d",&year);
    int state = 0;
    if(year < 2001 || year > 2100){
        printf("Invalid year!");
    }else{
        while(year0 <= year){
            if((year0 % 100 != 0 && year0 % 4 == 0) || year0 % 400 == 0){
                printf("%d\n",year0);
                state = 1;
            }else;
            year0++;
        }
        if(state == 0){
            printf("None");
        }else;
    }
    return 0;
}