char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

char *mx_strdup(const char *s1) {
	return mx_strcpy(mx_strnew(mx_strlen(s1)), s1);
}

