#include<stdio.h>
int main() {

    int num = 5 ;
    int prime = 0;
    for (int i = 0; i < num ; i++)

    {
        if (num%i == 0){
        printf("this is a prime number");
        }

        else{
        printf("not a prime number");
        }
        return 0;

    }
   

}