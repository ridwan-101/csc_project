#include <stdio.h>
int main() {
    char firstName[50];
    char middleName[50];
    char lastName[50];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your middle name: ");
    scanf("%s", middleName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    printf("Full Name: %s %s %s\n", firstName, lastName, middleName);
    return 0;
}
