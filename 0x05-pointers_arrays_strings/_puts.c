#include "main.h"
#include <unistd.h>

void _puts(char *str) {
    while (*str != '\0') {
        _putchar(*str++);
    }
    _putchar('\n');
}

int _putchar(char c) {
    return write(1, &c, 1);
}
