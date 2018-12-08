#include <stdio.h>
#include "StringCompare.h"

// Find occurances of word in an word array
int find_occ(char *item, char **array) {
    int i;
    int count = 0;
    int res = 0;

    for (i = 0; array[i] != '\0'; i++) {
        res = comparestr(item, array[i]);
        if (res > 0) {
            ++count;
        }
    }

    return count;
}