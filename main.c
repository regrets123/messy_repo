#include <stdio.h>
#include <stdbool.h>

void println(char* msg) {
    printf(msg);
    printf("\n");
}

int main(void) {
    bool isRich = false;
    println("Hello Forsaken World!");

    if (isRich) {
        println("Squeeze every drop of value from your workers!");
    }
    else {
        println("Eat the rich!");
    }

    return 0;
}
