#include <stdio.h>
#include "StringCompare.h"

// Find occurances of word in an word array
int find_occ(char *item, char **array) {
    int i;
    int count = 0;
    int match = 0;

    for (i = 0; array[i] != '\0'; i++) {
        match = comparestr(item, array[i]);
        if (match) {
            ++count;
        }
    }

    return count;
}