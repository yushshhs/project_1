#include <stdio.h>
int main() {
    int c , f;

    printf("Enter the value of temperature in celsius: \n");
    scanf("%d" , &c);

    f=(9.0/5.0)*c+32;
    printf("The value of this celsius temperature in fahrenheit is: %d\n" , f);

    return 0;
  
}