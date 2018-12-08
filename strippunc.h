#ifndef STRIPPUNCE
#define STRIPPUNCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * strippunc(char *content) {
	int i;

	for (i = 0; content[i] != '\0'; i++) {
		if ((content[i] >= 32 && content[i] <= 47) || (content[i] >= 58 && content[i] <= 64)) {
			content[i] = '\0';
			break;
		} 
	};

	return content;
};
#endif