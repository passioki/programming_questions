#include<stdio.h>
int main(int argc ,char** argv){
    int n;
    scanf("%d",&n);
    n /= 2;
    for(int j = 0,i = n;i >= 0;j++,i--){
        int num = i * 2;
        while( num--){
            printf(" ");
        }
        int symbol_num = j * 2 + 1;
        while( symbol_num-- ){
            printf("* ");
        }
        printf("\n");
    }
    for(int j = n,i = 1;j > 0; j--,i++){
        int num = i * 2;
        while(num--){
            printf(" ");
        }
        int symbol_num = j * 2 - 1;
        while(symbol_num--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
      * 
    * * * 
  * * * * * 
* * * * * * * 
  * * * * * 
    * * * 
      * 
*/