#ifndef CREATESTRING
#define CREATESTRING
#include <stdio.h>
#include <stdlib.h>

// Creates string based on indexes, and return position in memory to string
char * makestring(int start, int end, char *content) {
	int i;
	char *pword = (char*)malloc((end - start + 5)*sizeof(char));
	int inc = 0;

	for (i = start; i < end + 1; i++) {
		pword[inc] = content[i];
		++inc;
	}
	
	pword[inc] = '\0';
	// pword[inc + 1] = '\0';

	printf("\nWord: %s Add: %p\n", pword, &*pword);

	return &*pword;
};
#endif