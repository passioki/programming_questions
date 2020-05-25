#include<stdio.h>
int main(int argc ,char** argv){
    char character;
    int cnt = 0;
    int letter = 0,blank = 0,digit = 0,other = 0;
    while(cnt < 10){
        scanf("%c",&character);
        cnt++;
        if((character <= 'Z' && character >= 'A' )|| (character <= 'z' && character >= 'a')){
            letter++;
        }else if(character == ' ' || character == '\n'){
            blank++;
        }else if(character <= '9' && character >= '0'){
            digit++;
        }else{
            other++;
        }
        
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);

    return 0;
}