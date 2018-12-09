int hash(char *key, int array_size) {
    // Using ASCII Value to create hash
    int value = 0;
    int i = 0;
    int index = 0;
    int last_value = 0;
    int first = key[i];
    for (i = 0; key[i] != '\0'; i++) {
        value = value + key[i];
        last_value = key[i];
    };

    if (array_size < 1) {
        index = value%1;
    } else {
        index = (value);
    }
    
    return index;
}