#include<stdio.h>
int main(){
    
    /*
    Primenum%i==0
    
    */
    
    
    int M,N,sum = 0,Primenum,remainder_;
    int i,j,count = 0,num = 0;
    scanf("%d %d",&M,&N);
    
    for(i = M;i<=N;i++){//遍历一遍M到N的数字，从中挑选素数，记为i
        for(j = 1;j<=i;j++){//遍历一遍1到i的数，分别使i对j求余
            remainder_ = i % j;
            if(remainder_ == 0){//如果余数为0，能够整除，
                Primenum = i;
                count++;//则计数加一
            }else;
        }
        if(count == 2){//计数为二时，该数字为素数
            sum += Primenum;
            num++;
        }else;
        count = 0;//count初始化,用于下一轮循环
    }
    
    printf("%d %d",num,sum);

    
    
    return 0;
}

