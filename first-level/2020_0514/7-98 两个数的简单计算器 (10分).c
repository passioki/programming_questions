#include<stdio.h>
int main(int argc ,char* argv[]){
    int op1,op2;
    char op;
    int c;
    scanf("%d %c %d",&op1,&op,&op2);
    switch(op){
        case '+':printf("%d",op1 + op2);break;
        case '-':printf("%d",op1 - op2);break;
        case '*':printf("%d",op1 * op2);break;
        case '/':printf("%d",op1 / op2);break;
        case '%':printf("%d",op1 % op2);break;
        default:printf("ERROR");break;
    }
    

    return 0;
}