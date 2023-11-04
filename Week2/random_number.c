#include <stdio.h> // This line includes the standard input/output library.
#include <stdlib.h> // This line includes the standard library for functions like srand and rand.
#include <time.h> // This line includes the time library for generating a seed for random number generation.

int main() { // This is the entry point of your program.
    time_t t1; // Declare a variable of type 'time_t' for storing time information.
    srand((unsigned) time(&t1)); // Seed the random number generator with the current time.

    int com = 3; // Declare a variable 'com' and set it to a specific number (in this case, 3).
    int user; // Declare a variable 'user' to store the user's input.

    printf("Guess a number and win a gift: "); // Display a message prompting the user to guess a number.
    scanf("%d", &user); // Read the user's input as an integer and store it in the 'user' variable.

    if (com == user) { // Check if the user's guess matches the predetermined number (3).
        printf("You guessed correctly"); // Display a message indicating that the user guessed correctly.
    } else {
        printf("You lose"); // Display a message indicating that the user's guess was incorrect.
    }

    return 0; // Return 0 to indicate successful program execution.
}
