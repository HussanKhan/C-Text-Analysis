#include <stdio.h>
#include "tokenize_text.h"
#include "find_occ.h"

int main() {
    char text[100000] = "Generate lots of data. The exact amount depends on the size of the city and its sophistication and ambitions, but it's certainly more than mere humans can absorb and use. The Smart Cities movement, which looks for ways to find data-driven technological solutions to everyday urban challenges, is increasingly turning to artificial intelligence to deliver 'services' to its residents—everything from locating gunshots and finding tumors to dispatching work crews to pick up trash. New York is one of about 90 cities worldwide that uses a system called ShotSpotter, which uses a network of microphones to instantly recognize and locate gunshots. In Moscow, all chest X-rays taken in hospitals are run through an AI system to recognize and diagnose tumors. And Taiwan is building a system that will be able to predict air quality, allowing city managers to warn residents of health dangers and work to lessen what the data tells them will be the worst of the impacts. What constitutes a 'Smart City' isn't well-defined. In the broadest sense, a Smart City is one that uses electronic means to deliver services to its residents. But if you dig down even a little, delivering even on that simple promise of service delivery can be exquisitely difficult. For example, Smart City technology might strive to eliminate the need to call up your alderman to complain that the streets aren't getting plowed. Instead, a network of sensors—yes, an Internet of Things—would know when the snow is falling, how much has fallen, where the snowplows are, when they've last been on your street, and when they'll be there next. All of that would be delivered in a browser or app to anyone who cares to either dial in or build their own information utility using that freely available data.";
    char *token[500];

    char *ptext = text;

    int res;

    // strippunc(ex);

    // // printf("%s", ex);


    token_text_1(ptext, token);

    int i;

    int response;

    for (i = 0; token[i] != '\0'; i++) {
        response = find_occ(token[i], token);

        printf("Word: %s Count: %d\n", token[i], response);
        
        free(&*token[i]);
    };

    // int i;

    // for (i = 0; token[i] != '\0'; i++) {
    //     res = comparestr(token[i], token[i]);

    //     if (res) {
    //         printf("MATCH: %s %s\n", token[i], token[i]);
    //     } else {
    //         printf("MISS: %s %s\n", token[i], token[i]);
    //     }
    //     // printf("--%s--", token[i]);
    //     free(&*token[i]);
    // };

    // printf("Word: %s Add: %p\n", token[0], &*token[0]);

    // int check = hash(token[0], 0);

    // printf("%d\n", check);

    // free(&*token[0]);

    // printf("Word: %s Add: %p\n", token[0], &*token[0]);

    return 0;
}