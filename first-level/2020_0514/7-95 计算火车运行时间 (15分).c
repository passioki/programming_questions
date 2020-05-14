#include<stdio.h>
int main(int argc ,char** argv){
    int start,end;
    scanf("%d %d",&start,&end);
    int hour1,hour2,min1,min2;
    hour1 = start/100;
    hour2 = end/100;
    min1 = start%100;
    min2 = end%100;
    int hour = hour2 - hour1,min = min2 - min1;
    if(min >= 0){
        printf("%02d:%02d",hour,min);
    }else{
        min += 60;
        hour -= 1;
        printf("%02d:%02d",hour,min);
    }
    return 0;
}
