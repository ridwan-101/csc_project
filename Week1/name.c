#include <stdio.h> // This line includes the standard input/output library.

int main() { // This is the entry point of your program.
    char name[99]; // Declare an array of characters named 'name' with a maximum length of 99 characters.

    printf("What's your name: "); // Display a message asking for the user's name.
    scanf("%99s", name); // Read the user's input, which is a string, and store it in the 'name' variable.

    printf("Hello %s\n", name); // Display a greeting message with the user's name.

    return 0; // Return 0 to indicate successful program execution.
}
