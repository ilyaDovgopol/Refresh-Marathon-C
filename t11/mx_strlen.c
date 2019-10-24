int mx_strlen(const char *s) {
	if (!s) {
		return 0;
	}
	int c = 0;

	while (s[c] != '\0') {
		c++;
	}
	return c;
}

