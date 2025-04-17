#include<stdio.h>
#include<string.h>                                                          

int main() {
    char str []= "hello ";
    char str1[]= "world";
    strcat(str, str1);
    printf("%s\n", str);
    return 0;
} 