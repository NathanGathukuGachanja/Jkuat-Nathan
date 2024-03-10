#include <stdio.h>
#include <stdlib.h>

char input()
{
    char student_name;
    printf("Enter student's name\n", student_name);
    scanf("%c", &student_name);
}

int main()
{
    input();
    printf("This student is amazing at everything they do!");
    return 0;
}
