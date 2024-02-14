#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;



    printf("Enter the starting value:\n");
    scanf("%d,&a");
    printf("Enter the increment value:\n");
    scanf("%d", &b);
    printf("Enter the ending value:\n");
    scanf("%d", &c);
    printf("Fahrenheit-to-Celsius conversion table\n");

    {
        printf("%4d degrees F = %4d degrees C\n",a,(a-32)*5/9);
        printf("%4d degrees F = %4d degrees C\n",b,(b-32)*5/9);
        printf("%4d degrees F = %4d degrees C\n",c,(c-32)*5/9);

    }
      while(a<=c)
      return 0;

}
