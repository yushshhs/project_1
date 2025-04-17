#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Student {
    int rollNumber;
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Student student1;
    char genderInput;
    
    printf("Enter student details:\n");
    
    printf("Roll Number: ");
    scanf("%d", &student1.rollNumber);
    
    printf("Name: ");
    scanf(" %[^\n]", student1.name);
    
    printf("Age: ");
    scanf("%d", &student1.age);
    
    printf("Gender (M/F/O): ");
    scanf(" %c", &genderInput);
    
    switch(genderInput) {
        case 'M':
        case 'm':
            student1.gender = MALE;
            break;
        case 'F':
        case 'f':
            student1.gender = FEMALE;
            break;
        default:
            student1.gender = OTHER;
    }
    
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Gender: ");
    
    switch(student1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }
    
    return 0;
}