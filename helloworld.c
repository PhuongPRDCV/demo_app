#include <stdio.h>
#include "greetings.h"
int main(void) {
    char greeting[40];
    get_greeting(greeting);
    printf("Hello world!\n");
    printf("%s", greeting);
    return 0;
}