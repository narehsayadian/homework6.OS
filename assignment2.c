
#include <stdio.h>

struct Original {
    char a;
    int b;
    double c;
};

struct Rearranged {
    double c;
    int b;
    char a;
};

int main(void) {
    struct Original s1;
    struct Rearranged s2;

    printf("Original struct:\n");
    printf("Size: %zu bytes\n", sizeof(s1));
    printf("Address of a: %p\n", (void *)&s1.a);
    printf("Address of b: %p\n", (void *)&s1.b);
    printf("Address of c: %p\n", (void *)&s1.c);

    printf("\nRearranged struct:\n");
    printf("Size: %zu bytes\n", sizeof(s2));
    printf("Address of c: %p\n", (void *)&s2.c);
    printf("Address of b: %p\n", (void *)&s2.b);
    printf("Address of a: %p\n", (void *)&s2.a);

    return 0;
}
