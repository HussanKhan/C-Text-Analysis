#ifndef CREATESTRING
#define CREATESTRING
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "strippunc.h"

// Creates string based on indexes, and return position in memory to string
// does not include punc
char * makestring(int start, int end, char *content) {
	int i;
	char *pword = (char*)malloc((end - start + 5)*sizeof(char));
	int inc = 0;

	for (i = start; i < end + 1; i++) {
		if ((content[i] >= 32 && content[i] <= 47) || (content[i] >= 58 && content[i] <= 64)) {
			
		} else {
			pword[inc] = tolower(content[i]);
			++inc;
		}
	}
	
	pword[inc] = '\0';

	// printf("\nWord: %s Add: %p\n", pword, &*pword);

	return &*pword;
};
#endif