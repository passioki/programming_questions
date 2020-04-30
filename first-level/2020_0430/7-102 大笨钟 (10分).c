#include<stdio.h>
int main(int argc ,char** argv){
    int hours,minutes;
    scanf("%d:%d",&hours,&minutes);
    if(hours >= 12 && minutes > 0){
        int i = hours - 12 + 1;
        while(i--){
            printf("Dang");
        }
    }else if(hours > 12){
        int i = hours - 12;
        while(i--){
            printf("Dang");
        }
    }else{

        printf("Only %02d:%02d.  Too early to Dang.",hours,minutes);
    }

    return 0;
}