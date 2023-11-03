#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t t1;
    srand((unsigned) time (&t1));
    int com = 3; 
    int user;
    printf("Guess a number and win a gift: ");
    scanf("%d", &user);

    if (com == user)
    {
    printf("You guessed correctly");
    }else {
    printf("You loose");
    }
    return 0;
}

