int mx_sqrt(int x) {
	int c = 1;

	while (c * c < x) {
		c++;
	}
	if (c * c == x) {
		return c;
	}
	return 0;
}

