#include<stdio.h>
int main(int argc ,char** argv){
    char c;
    while((c = getchar()) != '\n'){
        // if(c <= 'z' && c >= 'a'){
        //     int order = 26 -('z' - c);
        //     putchar(c + 27 - order * 2);
        // }
        // else 
        if(c <= 'Z' && c >= 'A'){
            int order = 26 -('Z' - c);
            putchar(c + 27 - order * 2);
        }else{
            putchar(c);
        }
        // A B C D E F G H I J K L M 
        // N O P Q R S T U V W X Y Z
    }
    return 0;
}