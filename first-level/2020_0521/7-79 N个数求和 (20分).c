
// #include<stdio.h>
// int main()
// {
// 	int n,i;
// 	long long int a,b,c,d,m1,m2,p;
// 	scanf("%d",&n);
// 	scanf("%lld/%lld",&a,&b);
// 	while(--n)
// 	{
// 		scanf("%lld/%lld",&c,&d);
// 		m1=a * d+b * c;
// 		m2=b * d;
// 		if(m1>m2) p=m2;
// 		else p=m1;
// 		if(p<0) p=-p;
// 		for(i=p;i>=1;i--)
// 		{
// 			if(m1%i==0&&m2%i==0)
// 			{
// 			  a=m1/i;
// 		    b=m2/i;
// 		    break;
// 			} 
// 		}
// 		if(i<1)//测试点五：当分子为零时没有最大公约数;
// 		{
// 			a=m1;
// 			b=m2;
// 		}
// 	}
// 	if(a>b) p=b;
// 	else p=a;
// 	for(i=p;i>=1;i--)
// 	{
// 		if(a%i==0&&b%i==0)
// 		{
// 			a=a/i;
// 			b=b/i;
// 			//测试点3不写break;方可通过; 
// 		}
// 	}
// 	if(a%b==0) printf("%lld",a/b);
// 	else if(a/b==0&&a!=0&&b!=0) printf("%lld/%lld",a%b,b);
// 	else printf("%lld %lld/%lld",a/b,a%b,b);
//  } 

/*没有把化简步骤放在输入的循环中，容易溢出，需要重新修改结构，每输入一个完整的分数，便化简一次*/
// #include<stdio.h>
// int main(int argc ,char** argv){
//     long long num,numerator = 0,denominator = 0,new_numerator,new_denominator;
//     scanf("%lld",&num);
//     while(num--){

//         scanf("%lld/%lld",&new_numerator,&new_denominator);
//         if(denominator == 0){
//             numerator = new_numerator;
//             denominator = new_denominator;
//         }else{
//             numerator = numerator * new_denominator + new_numerator * denominator;
//             denominator *= new_denominator;
//         }
//     }
    
//     long long integer_part,i = 0;
//     integer_part = numerator / denominator;

//     /*找出分子分母公因子*/
//     numerator %= denominator;
//     if(numerator % denominator == 0){ //如果只有整数部分，则只输出整数部分
//         printf("%lld",integer_part);
//     }else{ 
//         while(i <= numerator){
//             if(numerator % ++i == 0 && denominator % i == 0){
//                 numerator /= i;
//                 denominator /= i;    
//             }else{
//                 ;
//             }
//         }
//             i = 0;
//         while(i <= numerator){ 
//             if(numerator % ++i == 0 && denominator % i == 0){
//                 numerator /= i;
//                 denominator /= i;    
//             }else{
//                 ;
//             }
//         }
        
//         if(integer_part == 0){
//             printf("%lld/%lld",numerator,denominator);
//         }else{
//             printf("%lld %lld/%lld",integer_part,numerator,denominator);
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main(int argc ,char** argv){
    long long num,numerator = 0,denominator = 0,new_numerator,new_denominator;
    scanf("%lld",&num);
    long long integer_part = 0;
    while(num--){

        scanf("%lld/%lld",&new_numerator,&new_denominator);
        if(denominator == 0){
            numerator = new_numerator;
            denominator = new_denominator;
        }else{
            numerator = numerator * new_denominator + new_numerator * denominator;
            denominator *= new_denominator;
        }
        if(numerator % denominator != 0){ // 除去整数部分
            integer_part += numerator / denominator;
            numerator %= denominator;
        }else{
            integer_part += numerator / denominator;
            numerator = denominator = 0;
        }
        if(numerator > 0){
            for(long long i = numerator;i > 1;i--){ // 化简正分数
                if(denominator % i == 0 && numerator % i == 0){
                    numerator /= i;
                    denominator /= i;
                    break;
                }else;
            }
        }else{
            for(long long i = numerator;i < -1;i++){ // 化简负分数
                if(denominator % i == 0 && numerator % i == 0){
                    numerator /= i;
                    denominator /= i;
                    break;
                }else;
            }
        }
    }
    if(integer_part != 0 && denominator != 0){
        printf("%lld %lld/%lld",integer_part,numerator,denominator);
    }else if(integer_part == 0 && denominator != 0 && numerator != 0){
        printf("%lld/%lld",numerator,denominator);
    }else{
        printf("%lld",integer_part);
    }
    return 0;
}