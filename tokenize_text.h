#include <stdio.h>
#include "createstring.h"

// Tokenizes word 
int token_text(char *text, char **token_text, int word_len) {
    int i;
    int word_start = 0;
	int word_end;
    int num_words = 0;
    int array_len = 0;

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            
            ++num_words;

            if (num_words%word_len == 0) {
                word_end = i - 1;
                word_start = word_start;
                
                token_text[array_len] = makestring(word_start, word_end, text);
                
                ++array_len;
                
                word_start = i + 1;
            }
        }
    }
    return 0;
}