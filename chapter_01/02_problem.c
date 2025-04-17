#include <stdio.h>
int main() {
    int r, height;
    printf("Enter the radius of the circle\n");
    scanf("%d" , &r);

    printf("Enter the height of the cylinder\n");
    scanf("%d" , &height);  

    printf("the area of the circle is %f\n" , 3.14*r*r);
    printf("the volume of the cyliner with radius %d and height %d is %f" ,r , height , 3.14*r*r*height);
    return 0;
}