#include<stdio.h>
int main(int argc,char **argv){
    int years,hours;
    scanf("%d %d",&years,&hours);
    double salary;
    if(years < 5){
        int money = 30;
        if(hours <= 40){
            salary = hours * money;
            printf("%.2f",salary);
        }else{
            salary = 40 * money + (hours - 40) * money * 1.5;
            printf("%.2f",salary);
        }
    }else{
        int money = 50;
        if(hours <= 40){
            salary = hours * money;
            printf("%.2f",salary);
        }else{
            salary = 40 * money + (hours - 40) * money * 1.5;
            printf("%.2f",salary);
        }
    }
    return 0;
}
