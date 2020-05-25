#include<stdio.h>
int main(int argc ,char** argv){
    int hours,minutes,seconds;
    int passed_seconds;
    scanf("%d:%d:%d\n%d",&hours,&minutes,&seconds,&passed_seconds);
    seconds += passed_seconds;
    if(seconds >= 60){
        seconds -= 60;
        minutes++;
        if(minutes >= 60){
            minutes -= 60;
            hours++;
            if(hours >= 24){
                hours -= 24;
            }else;
        }else;
    }else;
    printf("%02d:%02d:%02d",hours,minutes,seconds);
    return 0;
}