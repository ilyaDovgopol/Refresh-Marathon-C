int mx_factorial_iter(int n) {
	int i = 1;
	int f = n;

	if (n < 0 || n >= 13) {
		return 0;
	}
	if (n == 0) {
		return 1;
	}
	while (i < n) {
		f = f * i;
		i++;
	}
	return f;
}

