#include<stdio.h>

void main() {
    FILE*f1;
    char ch;
    f1=fopen("INPUT", "w");
    while(ch=getchar()!=EOF)
        putc(ch,f1);
    fclose(f1);
    f1=fopen("INPUT", "r");

    while((ch=getc(f1))!=EOF)
            printf("%c",ch);

}