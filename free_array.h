int free_array(char **array) {
    int i = 0;
    for (i = 0; array[i] != '\0'; i++) {
        printf("FREE: Word: %s Add: %p\n", array[i], &array[i]);
        free(&*array[i]);
    };
}