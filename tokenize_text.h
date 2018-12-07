#include <stdio.h>
#include "createstring.h"

int token_text(char *text, char **token_text) {
    int i;
    int word_start = 0;
	int word_end;
    int num_words = 0;
    char *word;

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            word_end = i - 1;
            word_start = word_start;
            token_text[num_words] = makestring(word_start, word_end, text);
            printf("Word: %s Add: %p\n", token_text[num_words], &*token_text[num_words]);
            break;
            word_start = i + 1;
            ++num_words;
        }
    }

    return 0;
}