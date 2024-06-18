//This program calculates the length of characters in a message

#include <stdio.h>


int main(void)

{
    int len = 0;
    
    printf("Enter a message: ");
    while (getchar() != '\n')
        len++;
    printf("Your message was %d character(s) long.", len);

    return 0;

}