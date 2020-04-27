/*这是我的实现方式，主要思想是使用state来判断兔子休息与否，
然后在每个state状态里设置一个子计时器，用来计算该状态经过的时间，
再通过内嵌判断，来实现state的转换*/

#include<stdio.h>
int main(){
    
    
    /*
    乌龟与兔子进行赛跑，跑场是一个矩型跑道，
    跑道边可以随地进行休息。乌龟每分钟可以前进3米
    ，兔子每分钟前进9米；兔子嫌乌龟跑得慢，觉得肯定能跑赢乌龟
    ，于是，每跑10分钟回头看一下乌龟，若发现自己超过乌龟
    ，就在路边休息，每次休息30分钟，否则继续跑10分钟；
    而乌龟非常努力，一直跑，不休息。假定乌龟与兔子在同一起点同一时刻开始起跑，
    请问T分钟后乌龟和兔子谁跑得快？
*/
    int r_distance = 0,t_distance = 0,T,t=0,state =1,r_count=0,t_count=0;
    
    scanf("%d",&T);
    
    while(t<T){//总计时器从0开始，到T-1为止经过了T分钟
        t++;每分钟进行一次距离加和
        
        if(state == 1){//兔子跑
                r_count++;
                r_distance += 9;
                t_distance += 3;
                if(r_count == 10){
                    
                    if(r_distance > t_distance){
                        state = 0;//rest for 30 minutes
                        t_count = 0;兔子休息，乌龟计时器初始化
                    }else{
                        state = 1;//run for another 10 minutes
                        r_count = 0;兔子继续跑，兔子计时器初始化
                    }//需要返回确认t是否溢出
                }else;
                
        }else{//兔子休息
            t_count++;
            t_distance += 3;
            if(t_count == 30){//兔子休息一轮了
                
                if(r_distance > t_distance){
                    state = 0;//rest for another 30 minutes
                    t_count = 0;兔子继续休息，乌龟计时器初始化
                }else{
                    state = 1;//run for 10 minutes
                    r_count = 0;//兔子开跑，兔子计时器初始化
                }//需要返回确认t是否溢出
            }else;
        }
    }
    if(r_distance > t_distance){
        printf("^_^ %d",r_distance);
    }else if(r_distance < t_distance){
        printf("@_@ %d",t_distance);
    }else{
        printf("-_- %d",t_distance);
    }
    
    return 0;
}

