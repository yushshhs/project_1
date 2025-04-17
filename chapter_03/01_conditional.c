# include<stdio.h>

int main() {
    int age = 18;

    if(age>10){
        printf("we are inside if\n");
        printf("your age is gretater than 18\n");
    }
    if(age%5==0){
        printf("we are inside another if\n");
        printf("your age is divisible by 5\n");
    }
    return 0;
}