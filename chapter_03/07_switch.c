#include<stdio.h>

int main(){
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    switch(a){
        case 1:
        printf("you enterd 1\n");
        break;
        case 2:
        printf("you entered 2\n");
        break;
        case 3:
        printf("you entered 3\n");
        break;
        case 4:
        printf("you enterd 4\n");
        break;
        default:
        printf("nothing matched");

    return 0;
    }
}