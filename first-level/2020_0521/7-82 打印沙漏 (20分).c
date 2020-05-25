#include<stdio.h>
int main(int argc ,char** argv){
    int num;
    char symbol;
    scanf("%d %c",&num,&symbol);
    int sum = 1,line = 0,required_symbol = 1;
    
    for(int i = 1;sum + 2 * (2 * i + 1) <= num;i++){
        sum += 2 * (2 * i + 1);
        required_symbol = sum;
        line = i; //保存对半的行数（不包括中间那行）
    }
    
    int longest_line = line * 2 + 1, max = longest_line,blank_left,blank_right,cnt = 0;
    int bottle1 = line,bottle2 = longest_line;
    
    /*完成上半部分 + 中间部分*/
    while(line + 1 > 0){
        longest_line = line * 2 + 1;

        while(longest_line > 0){
            blank_right = blank_left = ++cnt;
            
            while(--blank_left){
                printf(" ");
            }
            while(longest_line--){
                printf("%c",symbol);
            }
            // while(--blank_right){
            //     printf(" ");
            //     if(blank_right == 1){
            //         printf(" \n");
            //         break;
            //     }else;
            // }
            // if(cnt == 1){
                printf("\n");
            // }else;

        }
        line--;
    }

    cnt = 0;
    line = bottle1;
    
    /*完成下半部分*/
    while(line> 0){

        cnt++;
        longest_line = cnt * 2 + 1;

        while(longest_line > 0){

            blank_right = blank_left = line;

            while(--blank_left){
                printf(" ");
            }

            while(longest_line--){
                printf("%c",symbol);
            }

            // while(--blank_right){
            //     printf(" ");
            //     if(blank_right == 1){
            //         printf(" \n");
            //         break;
            //     }else;
            // }
            // if(line == 1){
                printf("\n");
            // }
        }
        line--;
    }

    int residual_symbol = num - required_symbol;
    printf("%d",residual_symbol);

    return 0;
}