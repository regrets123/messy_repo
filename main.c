#include <stdio.h>
#include <stdbool.h>
#include "calc.h"
#define TWO 2

void println(char* msg) {
    printf(msg);
    printf("\n");
}


int main(void) {
    bool isRich = false;
    printf("Hello Forsaken World!\n");

    if (add(1, 1) == 2) {
        isRich = true;
    }

    if (isRich) {
        printf("Squeeze every drop of value from your workers!\n");
    }
    else {
        printf("Eat the rich!\n");
    }

    return 0;
}
