#include<stdio.h>
int main(int argc ,char** argv){
    int a;
    int cnt = 0;
    while(1){
        
        scanf("%d",&a);
        cnt++;
        if(a == 250){
            printf("%d",cnt);
            break;
        }else{
            ;
        }
    }
}
// #include<stdio.h>

// int main(int argc,char **argv){
//     int a;      //输入的单个字符的存储变量
//     int state = 0,status = 1;       //state来表示getchar函数读到哪块区域了
//     int cnt = 0;
//     while((a = getchar()) != EOF){
//         if(a == ' ' ||  a == '\n' || a == '\t'){
//              state = 0;
//         }else if(a == '-'){
//              state = 2;     //进入负数内部
//              cnt++;
//         }else{
//             ;
//         }
//         if(state == 0 && a != ' ' && a != '\t' && a != '\n'){    //进入新的数字内
//             state = 1;
//             cnt++;     //数字位置加一
//             if(a == '2' && status == 1){
//                 while((a = getchar()) != ' ' && a != EOF){
//                     if(a == '5'){
//                         a = getchar();
//                         if(a == '0' && ((a = getchar()) == ' ' || a == EOF || a == '\n' || a == '\t')){
//                             printf("%d",cnt);
//                             status = 0;
//                             break;     //已经读到第一个250了，之后不需再读
//                         }else{
//                             break;
//                         }
//                     }else{
//                         break;
//                     }
//                 }
//             }else{
//                 ;
//             }
//         }else{
//             ;
//         }
//         if(status == 0){
//             break;
//         }
//     }
    
//     return 0;
// }
