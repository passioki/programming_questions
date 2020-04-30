#include<stdio.h>
int main(int argc,char **argv){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b > 0){
        printf("%d/%d=%.2f",a,b,1.0*a/b);
    }else if(b < 0){
        printf("%d/(%d)=%.2f",a,b,1.0*a/b);
    }else{
        printf("%d/%d=Error",a,b);
    }
    return 0;
}