static void sort(char *s[], int size);
int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int c, char *v[]) {
    if (c < 2) {
        return 0;
    }
    sort(&v[1], c - 1);
    for (int i = 1; i < c; i++) {
        mx_printstr(v[i]);
        mx_printchar('\n');
    }
    return 0;
}

static void sort(char *s[], int size) {
    int max;
    char *swap;

    for (int i = 0; i < size - 1; i++) {
        max = i;
        for (int j = i + 1; j < size; j++) {
            if (mx_strcmp(s[max], s[j]) > 0) {
                max = j;
            }
        }
        swap = s[i];
        s[i] = s[max];
        s[max] = swap;
    }
}

