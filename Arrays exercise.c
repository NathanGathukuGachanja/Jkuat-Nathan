#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int a[MAX];
int rand_seed = 10;
/*
*from K&R  - produces an integer random number between 0 and 32767*/

int rand(void)
{
    rand_seed = rand_seed * 1103515245 + 12345;
    return (unsigned int)(rand_seed / 65536) % 32768;
}

int main(void)
{
    int i , t , x , y;
    /* Fill the array */
    for (i=0; i< MAX; i=i+1)
    {
        a[i]= rand();
        printf("%d\n", a[i]);
    }

    //bubble sort the array//

    for (x = 0; x<MAX-1; x= x+1)
    {
        for (y=0; y<MAX-x-1; y= y+1)
        {
            if (a[y]>a[y+1])
            {
                t = a[y];
                a[y] = a [y+1];
                a[y+1]  = t;
            }
        }
    }
    // Print the stored array
    printf("---------------\n");
    for (i = 0; i < MAX; i = i+1)
    {
        printf("%d\n", a[i]);
    }
    return 0;

}
