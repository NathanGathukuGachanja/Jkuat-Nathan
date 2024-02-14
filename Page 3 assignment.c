#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=10;
    while (a<=100)
    {
        printf("%6.3f Pounds =%6.3f Kilograms\n", a,(a*0.453592));
        a=a+20;
    }
    return 0;
}
