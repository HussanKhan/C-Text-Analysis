int hash(char *key, int array_size) {
    // Using ASCII Value to create hash
    int value = 0;
    int i;
    int index = 0;

    for (i = 0; key[i] != '\0'; i++) {
        value = value + key[i];
    };

    if (array_size < 1) {
        index = value%1;
    } else {
        index = value%array_size;
    }
    
    return index;
}