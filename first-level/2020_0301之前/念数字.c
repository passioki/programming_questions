#include<stdio.h>
#include<math.h>
int main(){

    int N ,type,M,count = 0, multiple = 1,remainder_= 1;
    int i,j;
    
    scanf("%d",&N);
    M = N;
    while(N != 0){//获得数字位数
        N /= 10;
        count++;
    }
    multiple = pow(10,count-1);//倍数用来获得首位数字
    if(multiple == 0){//当输入数字为0时，倍数受到影响变为0，此处将倍数初始化为1
        multiple = 1;//避免出现将0作为分母的情况
    }
    
    if (M < 0){
        printf("fu ");
        M = -M;
    }else;
    while(multiple != 1){//多次实验后，发现倍数为1可以作为终止条件，
        type = M / multiple;//循环终止后还有个位数没有输出
        remainder_ = M % multiple;
        M = remainder_;
        multiple /= 10;
        switch(type){
            case 0: printf("ling ");break;
            case 1: printf("yi ");break;
            case 2: printf("er ");break;
            case 3: printf("san ");break;
            case 4: printf("si ");break;
            case 5: printf("wu ");break;
            case 6: printf("liu ");break;
            case 7: printf("qi ");break;
            case 8: printf("ba ");break;
            case 9: printf("jiu ");break;
        }
        
    }
        type = M / multiple;//循环终止后还有个位数没有输出，所以再添加一轮输出
        remainder_ = M % multiple;
        M = remainder_;
        multiple /= 10;
        switch(type){
            case 0: printf("ling");break;
            case 1: printf("yi");break;
            case 2: printf("er");break;
            case 3: printf("san");break;
            case 4: printf("si");break;
            case 5: printf("wu");break;
            case 6: printf("liu");break;
            case 7: printf("qi");break;
            case 8: printf("ba");break;
            case 9: printf("jiu");break;
        }
    return 0;
}


