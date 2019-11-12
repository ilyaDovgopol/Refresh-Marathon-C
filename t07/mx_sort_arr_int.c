void mx_sort_arr_int(int *arr, int size) {
	if (!arr) {
		return;
	}
	for (int i = 0; i < size - 1; i++) {
		int max = i;

		for (int j = i + 1; j < size; j++) {
			if (arr[max] > arr[j]) {
				max = j;
			}
		}
		int swap = arr[i];

		arr[i] = arr[max];
		arr[max] = swap;
	}
}

