#include<stdio.h>
int main(){
    char ch ;
    printf("enter the charcter %C:\n");
    scanf("%C", &ch);
    printf("the character is %C\n", ch);
    printf("The value of the character is %d\n", ch);

    if(ch>=97 && ch<=122){
        printf("the character is lower case\n");
    }
    else{
        printf("the character is upper case\n");
    }
    return 0;
}