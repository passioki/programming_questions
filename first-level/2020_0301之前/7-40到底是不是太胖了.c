#include<stdio.h>
#include<math.h>
/*
| 真实体重 − 标准体重 | < 标准体重×10%
stdW == (H-100)*0.9;

*/
int main(){

    int N,count = 0,cipher = 0,decrypt = 0,multiple = 10;
    double stdW,realW,H;
    scanf("%d",&N);
    while(count <N){
        count++;
        scanf("%lf %lf",&H,&realW);//市斤数
        stdW = (H-100)*0.9;//标准体重；公斤数；
        realW /= 2;//公斤数
        if(fabs(realW - stdW) < stdW*0.1){//完美体重判断
            cipher = cipher*10 + 1;

        }else if(realW - stdW >= stdW*0.1){//超重判断
            cipher = cipher*10 + 2;

        }else{//偏瘦判断
            cipher = cipher*10 + 3;

        }

    }
    /*
    123/100=1;
    123%100=23;
    100/10=10;

    23/10=2;
    23%10=3;
    10/10=1;

    3/1=3;
    3%1=0;
    1/10=0;
    */

    multiple = pow(multiple,N -1);
    while(cipher>0){
        decrypt = cipher / multiple;
        cipher %= multiple;
        multiple /= 10;

        if(decrypt == 1){
            printf("You are wan mei!\n");
        }else if(decrypt == 2){
            printf("You are tai pang le!\n");
        }else{
            printf("You are tai shou le!\n");
        }
    }

    // You are wan mei!
    // You are tai pang le!
    // You are tai shou le!

    return 0;
}
/*3
169 136
150 81
178 155*/

