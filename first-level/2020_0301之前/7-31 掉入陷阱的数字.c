#include<stdio.h>
#include<math.h>
int main(){
    
    /*
    123/100=  1;
    123%100=23;
    100/10=10;
    23/10=   2;
    23%10=3;
    10/10=1;
    3/1=    3;
    3%1=0;
    
    */
    
    
    
    int N,N0,N1 = 0,sum = 0,N2;
    int count = 0,multiple;
    int bottle,i = 0;
    scanf("%d",&N);
    
    do{
        
        N0 = N;
        N2 = N;//作为最后一个循环的判断值
        do{//获得数字位数
            N /= 10;
            count++;
        }while(N != 0);
        
        multiple = pow(10,count - 1);
        count = 0;
        
        while(N0 != 0){//分离数字各个位数上的数字，并加和；
            sum += N0/multiple;
            N0 %= multiple;
            multiple /= 10;
        }
        
        bottle = N1;
        N1 = sum * 3 + 1;
        N = N1;
        sum = 0;//sum初始化
        i++;
        printf("%d:%d\n",i,N1);
    }while(bottle != N1 && N1 != N2);//N2为首轮N0的值，也就是N0和第一步处理后的N1值相同
                                    //即判断该循环是否'一步到位'
    return 0;
}
