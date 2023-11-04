#include <stdio.h> // This line includes the standard input/output library.

int main() { // This is the entry point of your program.
    char firstName[50]; // Declare a character array for the first name with a maximum length of 50 characters.
    char middleName[50]; // Declare a character array for the middle name with a maximum length of 50 characters.
    char lastName[50]; // Declare a character array for the last name with a maximum length of 50 characters.

    printf("Enter your first name: "); // Display a message asking for the user's first name.
    scanf("%s", firstName); // Read the user's input (a single word) and store it in the 'firstName' variable.

    printf("Enter your middle name: "); // Display a message asking for the user's middle name.
    scanf("%s", middleName); // Read the user's input (a single word) and store it in the 'middleName' variable.

    printf("Enter your last name: "); // Display a message asking for the user's last name.
    scanf("%s", lastName); // Read the user's input (a single word) and store it in the 'lastName' variable.

    printf("Full Name: %s %s %s\n", firstName, middleName, lastName); // Display the full name with the middle name placed between the first and last names.

    return 0; // Return 0 to indicate successful program execution.
}
