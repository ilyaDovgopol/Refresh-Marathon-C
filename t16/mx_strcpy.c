char *mx_strcpy(char *dst, const char *src) {
    for (int i = 0; (dst[i] = src[i]); i++)
        ;
    return dst;
}

