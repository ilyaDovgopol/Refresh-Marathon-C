void mx_sort_arr_int(int *arr, int size) {
    if (!arr) {
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        int swap = arr[i];

        for (int j = i + 1; j < size; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        arr[i] = arr[min];
        arr[min] = swap;
    }
}
