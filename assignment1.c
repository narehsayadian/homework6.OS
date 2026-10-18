
#include <stdio.h>

int main(void) {
    int num = 10;
    char letter = 'A';
    double decimal = 3.14;
    short small = 5;

    printf("Size of int: %zu bytes\n", sizeof(num));
    printf("Size of char: %zu byte(s)\n", sizeof(letter));
    printf("Size of double: %zu bytes\n", sizeof(decimal));
    printf("Size of short: %zu bytes\n", sizeof(small));

    printf("\nMemory addresses:\n");
    printf("int:    %p\n", (void *)&num);
    printf("char:   %p\n", (void *)&letter);
    printf("double: %p\n", (void *)&decimal);
    printf("short:  %p\n", (void *)&small);

    return 0;
}
