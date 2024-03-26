#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float salary;
} Employee;

int main() {
    Employee employees[] = {
        {1, 30000.50},
        {2, 35000.75},
        {3, 40000.00}
    };
    int num_employees = sizeof(employees) / sizeof(Employee);

    FILE *file = fopen("employees.bin", "wb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fwrite(employees, sizeof(Employee), num_employees, file);

    fclose(file);

    printf("Data written to file successfully.\n");

    return 0;
}
