#include<stdio.h>
int main(){
    int product = 1;
    int n;

    printf("enter the number :");
    scanf("%d" ,&n);
    
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }

    printf("The factorial of the number is : %d" , product);
    return 0;
    
}