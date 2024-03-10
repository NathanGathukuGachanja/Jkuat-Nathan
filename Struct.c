#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

int main() {

    struct Point p1;

    p1.x = 5;
    p1.y = 10;

    printf("Coordinates of point p1: (%d, %d)\n", p1.x, p1.y);

    return 0;
}
