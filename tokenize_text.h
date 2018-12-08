#include <stdio.h>
#include "createstring.h"
#include "hash.h"

// Tokenizes 1 word each
int token_text_1(char *text, char **token_text) {
    int i;
    int word_start = 0;
	int word_end;
    int num_words = 0;
    char *word;
    int array_len = 0;
    int index;

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {

            word_end = i - 1;
            word_start = word_start;
                
            // index = hash(word, array_len);
                
            token_text[array_len] = makestring(word_start, word_end, text);
                
            ++array_len;

            // break;

            word_start = i + 1;

            ++num_words;
        }
    }
    return 0;
}

// Tokenizes 2 word each
int token_text_2(char *text, char **token_text) {
    int i;
    int word_start = 0;
	int word_end;
    int num_words = 0;
    char *word;
    int array_len = 0;
    int index;

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            ++num_words;
            if (num_words%2 == 0) {
                word_end = i - 1;
                word_start = word_start;
                // printf("\nStart: %d End: %d Num: %d\n", word_start, word_end, num_words);
                
                word = makestring(word_start, word_end, text);
                
                index = hash(word, array_len);
                
                token_text[index] = word;
                
                ++array_len;
                
                // printf("Word: %s Add: %p\n", token_text[0], &*token_text[0]);
                
                // break;
                
                word_start = i + 1;
            }
        }
    }
    return 0;
}

// Tokenizes 3 word each
int token_text_3(char *text, char **token_text) {
    int i;
    int word_start = 0;
	int word_end;
    int num_words = 0;
    char *word;
    int array_len = 0;
    int index ;

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            ++num_words;
            if (num_words%3 == 0) {

                word_end = i - 1;
                word_start = word_start;

                word = makestring(word_start, word_end, text);
                
                index = hash(word, array_len);
                
                token_text[index] = word;
                
                ++array_len;

                // printf("Word: %s Add: %p\n", token_text[0], &*token_text[0]);
                
                // break;
                
                word_start = i + 1;
            }
        }
    }
    return 0;
}