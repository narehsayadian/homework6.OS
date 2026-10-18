
#include <stdio.h>

struct Normal {
    char a;
    int b;
    double c;
};

#pragma pack(1)
struct Packed1 {
    char a;
    int b;
    double c;
};

#pragma pack(2)
struct Packed2 {
    char a;
    int b;
    double c;
};

#pragma pack(4)
struct Packed4 {
    char a;
    int b;
    double c;
};

#define SHOW_LAYOUT(T) do { \
    T s; \
    printf("\nSize of " #T ": %zu bytes\n", sizeof(s)); \
    printf("a offset: %td\n", \
           (char *)&s.a - (char *)&s); \
    printf("b offset: %td\n", \
           (char *)&s.b - (char *)&s); \
    printf("c offset: %td\n", \
           (char *)&s.c - (char *)&s); \
} while (0)

int main(void) {
    SHOW_LAYOUT(struct Normal);
    SHOW_LAYOUT(struct Packed1);
    SHOW_LAYOUT(struct Packed2);
    SHOW_LAYOUT(struct Packed4);

    return 0;
}




