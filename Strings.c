#include <stdio.h>
#include <stdlib.h>

void trim(char *str) {
    while (*str && isspace(*str)) {
        str++;
    }

    char *end = str;
    while (*end) {
        end++;
    }
    end--;
    while (end > str && isspace(*end)) {
        *end = '\0';
        end--;
    }
}

const char *getLastName(const char *fullname) {
    const char *last_name = fullname;
    while (*fullname) {
        if (*fullname == ' ') {
            last_name = fullname + 1;
        }
        fullname++;
    }
    return last_name;
}

void toUpper(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

const char *getFirstWord(const char *str) {
    while (*str && !isspace(*str)) {
        str++;
    }
    while (*str && isspace(*str)) {
        str++;
    }
    return str;
}

int main() {
    char name[100];
    printf("Enter your first and last name: ");
    fgets(name, sizeof(name), stdin);

    trim(name);
    const char *last_name = getLastName(name);
    printf("Last name: %s\n", last_name);

    toUpper(name);
    printf("Name in uppercase: %s\n", name);

    const char *remainder = getFirstWord(name);
    printf("Remainder of the name: %s\n", remainder);

    return 0;
}
