void mx_sort_arr_int(int *arr, int size) {
	if (!arr) {
		return;
	}
	for (int i = 0; i < size - 1; i++) {
		int m = i;

		for (int j = i + 1; j < size; j++) {
			if (arr[m] > arr[j]) {
				m = j;
			}
		}
		int t = arr[i];

		arr[i] = arr[m];
		arr[m] = t;
	}
}

