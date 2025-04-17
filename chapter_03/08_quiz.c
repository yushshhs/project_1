#include <stdio.h>

int main() {
    int marks;
    
    // Asking for user input
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Checking grade based on marks
    if (marks <= 100 && marks >= 90) {
        printf("Grade: A\n");
    } 
    else if (marks <= 89 && marks >= 80) {
        printf("Grade: B\n");
    } 
    else if (marks <= 79 && marks >= 70) {
        printf("Grade: C\n");
    } 
    else if (marks <= 69 && marks >= 60) {
        printf("Grade: D\n");
    } 
    else if (marks <= 59 && marks >= 50) {
        printf("Grade: E\n");
    } 
    else if (marks <= 49 && marks >= 40) {
        printf("Grade: F\n");
    } 
    else {
        printf("Invalid marks entered\n");
    }

    return 0;
}
