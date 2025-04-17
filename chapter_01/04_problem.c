#include <stdio.h>

int main() {
    int p, r ,t;

    printf("Enter the value of principle aomunt:\n");
    scanf("%d" , &p);

    printf("enter the value of rate:\n");
    scanf("%d" , &r);

    printf("Enter the value of time:\n");
    scanf("%d" , &t);

    printf("The simple interest is:%d\n" , p*r*t/100);
}