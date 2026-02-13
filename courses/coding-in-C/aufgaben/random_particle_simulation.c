#include <stdio.h>

int main(void) {

    int x = 10;
    int *p = &x;
    int **pp = &p;

    // TODO: complete the output statements
    printf("x = %d\n", x);
    printf("x via p = %d\n", *p);
    printf("x via pp = %d\n", **pp);

    **pp = 42;

    printf("x = %d\n", x);

    /* What are the types of the following expressions?
    x  --> Wert
    p  --> Pointer zu Adresse von x
    *p  --> Pointer auf Wert von x
    pp  --> Pointer zu Adresse von p
    *pp  --> Pointer zu Adresse von x und Wert von p
    **pp  --> Pointer auf Wert von x
    */

    return 0;
}