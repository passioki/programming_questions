#include<stdio.h>
int main(int argc,char **argv){
    int x,y;
    x = 3;
    y = x * x;
    printf("%d = %d * %d\n",y,x,x);
    printf("%d * %d = %d",x,x,y);
    return 0;
}