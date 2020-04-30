#include<stdio.h>
#include<math.h>
int main(int argc,char **argv){
    int n;
    double s = 0;
    scanf("%d",&n);
    for(int i = 1;i < n + 1;i++){
        s += sqrt(i);
    }
    printf("sum = %.2f",s);
    return 0;
}