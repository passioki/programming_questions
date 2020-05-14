#include<stdio.h>
int main(int argc ,char** argv){
    int salary;
    double tax_ratio;
    double tax_fee;
    scanf("%d",&salary);
    if(salary <= 1600){
        tax_ratio = 0;
        printf("%.2f",(salary)*tax_ratio);
    }else if(salary >1600 && salary <= 2500){
        tax_ratio = 0.05;
        printf("%.2f",(salary - 1600)*tax_ratio);
    }else if(salary >2500 && salary <= 3500){
        tax_ratio = 0.1;
        printf("%.2f",(salary - 1600)*tax_ratio);
    }else if(salary >3500 && salary <= 4500){
        tax_ratio = 0.15;
        printf("%.2f",(salary - 1600)*tax_ratio);
    }else{
        tax_ratio = 0.2;
        printf("%.2f",(salary - 1600)*tax_ratio);

    }
    return 0;
}