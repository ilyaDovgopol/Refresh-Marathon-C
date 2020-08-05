void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int c, char *v[]) {
    for (int i = 1; i < c; i++) {
        mx_printstr(v[i]);
        mx_printchar('\n');
    }
    return 0;
}
