#include<stdio.h>

int main(){
    int age=9;

    if(age>60){
        printf("you can drive and you are a senior citizen\n");
    }

    else if(age>40){
        printf("tou can drive and you are acitizen\n");
    }

    else if(age>18){
        printf("you can drive but just learn start driving\n");
    } 

    else{
        printf("you cannot drive you are under age\n");
    }
    return 0;
}