#include<stdio.h>
#include<math.h>
int main(int argc ,char** argv){
    
    unsigned int yuan;
    scanf("%u",&yuan);
    int state = 1;
    int first_num,m = yuan,cnt = 0,continuous_zero = 0;
    /*如果一开始的输入为0，那么输出0*/
    if(yuan == 0){
        printf("a");
    }
    
    /*获取数字位数*/
    while(m != 0){
        m /= 10;
        cnt++;
    }
    
    char uppercase_num;
    double digit;

    while(cnt--){

         /*取得首位数字*/
        digit = pow(10,cnt); 
        first_num = yuan / digit;
        
        uppercase_num = 'a' + first_num; //获得大写数字

        if(uppercase_num == 'a' && state == 0){ //本次数字是连续零
            continuous_zero++;
        }else if(uppercase_num == 'a'){//本次数字是单个零
            state = 0;
        }else if(continuous_zero != 0){ //经过前两个分支，这个分支的意思是：本次数字不是零，但是前面有几个连续零
            printf("a");
            continuous_zero = 0;
            state = 1;
        }else{ //本次数字不是零
            if(state == 0){ //前面有单个零
                printf("a");
            }else;
            state = 1; //当前数字不是零
        }

        yuan %= (int)digit;

        if(state == 1){ //当前数字不是零，所以输出当前数字的大写形式
            printf("%c",uppercase_num);
        }else;
        if(state == 1){ //当前数字不是零，需要输出符号
            switch(cnt + 1){
                case 2: printf("S"); break;
                case 3: printf("B"); break;
                case 4: printf("Q"); break;
                case 5: printf("W"); break;
                case 6: printf("S"); break;
                case 7: printf("B"); break;
                case 8: printf("Q"); break;
                case 9: printf("Y"); break;
                default: ; 
            }

        }else{ //当前数字是零或者连续零
            switch(cnt + 1){
                
                case 5: if(continuous_zero > 2){ //是3个或以上的连续零，所以跳过符号'W'
                            ;
                        }else{ //2个或以下的零，需要输出符号'W'
                            printf("W"); break;
                        }
                default: ; 
            }
        }
    }
    return 0;
}