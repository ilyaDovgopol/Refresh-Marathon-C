#include <stddef.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
    char *s = (char *)malloc((size + 1) * sizeof(char));

    if (size < 0 || !s) {
        return NULL;
    }
    for (int i = 0; i < size + 1; i++) {
        s[i] = '\0';
    }
    return s;
}

