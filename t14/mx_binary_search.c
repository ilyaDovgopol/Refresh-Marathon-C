int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int left = 0;
    int right = size - 1;

    if (!arr || !(*arr) || !s)
        return -1;
    *count = 0;
    while (left <= right) {
        int mid = (left + right) / 2;
        int n = mx_strcmp(s, arr[mid]);

        (*count)++;
        if (n > 0)
            left = mid + 1;
        else if (n < 0)
            right = mid - 1;
        else
            return mid;
    }
    *count = 0;
    return -1;
}

