#include <stdio.h> // This line includes the standard input/output library.

int main() { // This is the entry point of your program.
    int size = 8; // Declare and initialize a variable 'size' with a value of 8.

    for (int i = 0; i < size; i++) { // Start a loop that iterates from 0 to 'size - 1'.
        for (int j = 0; j < size; j++) { // Start an inner loop that iterates from 0 to 'size - 1'.
            if ((i + j) % 2 == 0) { // Check if the sum of 'i' and 'j' is even.
                printf("\u2588"); // If the sum is even, print a filled square character.
            } else {
                printf(" "); // If the sum is odd, print a space character.
            }
        }
        printf("\n"); // Print a newline character after each row of characters.
    }

    return 0; // Return 0 to indicate successful program execution.
}
