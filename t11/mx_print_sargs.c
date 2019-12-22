int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int c, char *v[]) {
    if (c < 2) {
        return 0;
    }
    for (int i = 1; i < c - 1; i++) {
        int min = i;
        char *swap = v[i];

        for (int j = i + 1; j < c; j++) {
            if (mx_strcmp(v[min], v[j]) > 0) {
                min = j;
            }
        }
        v[i] = v[min];
        v[min] = swap;
    }
    for (int k = 1; k < c; k++) {
        mx_printstr(v[k]);
        mx_printchar('\n');
    }
    return 0;
}

