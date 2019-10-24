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
	for (int i = 0; i < size; i++) {
		int m = i;

		for (int j = i; j < size; j++) {
			if (mx_strcmp(s[m], s[j]) > 0) {
				m = j;
			}
		}
		char *t = s[i];

		s[i] = s[m];
		s[m] = t;
	}
}

