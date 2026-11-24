#include <stdio.h>

int main(void) {
    unsigned a = 8, b = 3, c = 17;
    unsigned *p = &a;
    unsigned *q = &b;

    *p += *q + c;
    c = *q;
    p = &c;
    c += a;
    *p += 10;
    *q = *p;
    q = p;
    *q += 10;

    printf("a = %u, b = %u, c = %u\n", a, b, c);
    return 0;
}