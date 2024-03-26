#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr;

    ptr = &x;

    printf("The value of x is: %d\n", x);
    printf("The address of x is: %p\n", &x);
    printf("The value pointed to by ptr is: %d\n", *ptr);
    printf("The address stored in ptr is: %p\n", ptr);

    return 0;
}
