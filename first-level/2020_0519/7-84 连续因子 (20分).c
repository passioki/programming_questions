/*答案*/
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int n,pro,lenth=0,first=0;
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++)
	{
		pro=1;
	for(int j=i;pro*j<=n;j++)
	{
		pro=pro*j;
		if(n%pro==0&&j-i+1>lenth)
		{
			first=i;
			lenth=j-i+1;
		}
	}
}
if(lenth==0)
{
	lenth=1;
	first=n;
	
}
printf("%d\n",lenth);
printf("%d",first);
for(int k=1;k<lenth;k++)
printf("*%d",first+k);
}


/*答案错误&&运行超时*/
// #include<stdio.h>
// #include<math.h>
// int main(int argc ,char** argv){
//     long n,i,cnt = 0,m;
//     scanf("%d",&n);
//     m = n;
//     i = 2;
//     long bound0 = 0,max = 0;
//     long state = 0;

//     while( i <= n){
//         while(n % i == 0){
//             cnt++;
//             n /= i;
//             long j = i + 1;
//             while( n % j == 0 ){
//                 cnt++;
//                 state = 1;
//                 n /= j;
//                 i = ++j;
//             }
//             if(max < cnt && state == 1){                
//                 max = cnt;
//                 bound0 = j - max;
//             }else;
//         }
//         i++;
//         cnt = 0;
//         n = m;
//     } 
//     if(state == 1){
//         printf("%d\n",max);
//         while(--max && max > 0){
//             printf("%d*",bound0++);
//         }
//         printf("%d",bound0);
//     }else{
//         printf("1\n%d",n);
//     };
//     return 0;
// }

