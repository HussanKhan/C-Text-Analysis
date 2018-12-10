#include <math.h>

int hash(char *key, int array_size) {
    // Using ASCII Value to create hash
    unsigned long int value = 7;
    int i = 0;
    unsigned long int index = 0;
    unsigned long int order_value = 0;

    for (i = 0; key[i] != '\0'; i++) {
        value = (value << (i*5)) + (key[i]) + (key[i] << (i*3)) + (value >> (i)) + (key[i-1] << 1) + (key[i-1] >> i);
        // value = ((value << 5) + value) + key[i] + (key[i] << 1);
    };

    if (array_size < 1) {
        index = value%1;
    } else {
        index = (value)%1000;
    }
    
    return index;
}