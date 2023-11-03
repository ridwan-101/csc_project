
#include <stdio.h>

int main() {
    char name[99]; 

    printf("What's your name :");
    scanf("%99s",  name); 
    

    printf("Hello %s\n", name); 

    return 0;
};
