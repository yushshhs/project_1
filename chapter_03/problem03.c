#include<stdio.h>
int main(){
    float income,
    tax = 0;
    printf("Enter income: \n");
    scanf("%f", &income);

    if(income<=250000){
        tax = 0;
    }

    else if(income>=250000 && income<=500000){
        tax = (income - 250000) * 0.05;
    }

    else if(income>=500000 && income<=1000000){
        tax = (250000 * 0.05) + (income - 500000) * 0.20;

    }

    else{
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
    }
    printf("Tax to be paid: %.2f", tax);

    return 0;

}
