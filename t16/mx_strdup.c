#include <stddef.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *s1) {
    char *s = mx_strnew(mx_strlen(s1));

    if (!s) {
        return NULL;
    }
    mx_strcpy(s, s1);
    return s;
}

