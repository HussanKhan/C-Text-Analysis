#include <stdio.h>
#include "tokenize_text.h"
#include "find_occ.h"
#include "hash.h"

int main() {
    char text[1000000] = "In wake of its emissions scandal, Volkswagen Group has been on a mission to reinvent itself. After staking its reputation on diesel, the German automaker has conducted a volte face; electricity is now the future. It's spending billions on developing new battery electric vehicle platforms, billions building a US network of high-speed chargers, and has committed billions more to lock up battery supplies. And now, finally, the first of these efforts has begun to bear fruit. Behold, the first—but definitely not the last—battery electric vehicle from VW Group. One that has been designed from the ground up to be powered by electrons: the Audi e-tron. We got our first good look at a flashy launch event in San Francisco this past September, and now we've finally had a chance to drive it. After 24 hours on plane after plane, we put the e-tron through its paces on and off the roads. Along the way, we confirmed some of our preconceptions about this new BEV and busted others.\
There's no denying this electric SUV is clever, as is the way it has been positioned in the market. As with any electric car, it won't be for everyone. And boy was I wrong about what many of us thought would be the car's coolest new technology. Here's what we learned. Every few months it seems like I'm writing about yet another new electric VW named I.D. something-or-other that uses VW Group's new MEB electric vehicle architecture. Forget all about MEB when it comes to the e-tron, because MEB is for smaller vehicles. Within the corporate behemoth that is the VW Group, Audi is taking the lead for larger electric vehicles (like this one and Porsche's soon-to-arrive Taycan sedan), and for now it will use a modified version of the same MLB Evo vehicle architecture that provides the building blocks for cars and SUVs like the A8, Q7, Panamera, and so on. All the suspension pickup points are the same as any other MLB Evo vehicle, as is the internal electronic architecture (infotainment as well as driver assists) and the climate control system. But obviously there are some differences. Instead of an internal combustion engine, each axle sports its own asynchronous electric motor, each of which features a cooling lance running through it. At the front, this is parallel to the axle, but forget about a massively roomy 'frunk' much of the space under the hood is taken up by the cooling system, power electronics, and onboard AC charger. At the rear, the motor is coaxially mounted for better packaging and 50:50 weight distribution. Total power and torque output is 355hp (265kW) and 413lb-ft (561Nm) in normal conditions, which can increase to 402hp (300kW) and 490lb-ft (664Nm) for short bursts—about eight seconds—when the e-tron is in its sportiest setting. (The front motor is rated at 168hp at 182lb-ft (125kW at 247Nm), boosted to 181hp and 228lb-ft (135kW and 309Nm), the rear normally provides 188hp (140kW) at 232lb-ft (314Nm) but can boost to 221hp (165kW) and 262ft-lbs (355Nm)). The battery positioning follows standard BEV protocol and is located between the axles and underneath the passenger compartment. It's built up like a sandwich, starting at the bottom with a 3.5mm aluminum protection plate. Next is the liquid cooling system, then a housing tray, and on top of that the cell modules—36 in all. Each module contains 12 flexible 60Ah cell pouches, and individual modules can be replaced if necessary. A very sturdy battery frame surrounds the modules and battery pack to provide crash protection. Above the cells is another aluminum cover, then the battery junction box at the front, and another set of three more battery modules at the rear. The battery is rated at 95kWh with a nominal voltage of 396V. That gives the e-tron a WLTP-determined range of 248.5 miles (400km), although Audi is still waiting for the more accurate EPA rating to be determined. The pack is warrantied for eight years or 100,000 miles, and Audi says it is guaranteed to maintain at least 70 percent of its capacity at the eight-year mark.";
    char *token[5000];

    char *unique_words[500];

    int u_counts[500];

    char *ptext = text;

    token_text(ptext, token, 1);

    int i;
    int response;
    int u = 0;
    int u_check = 0;
    for (i = 0; token[i] != '\0'; i++) {
        // Seeing if word already in unique words array
        u_check = find_occ(token[i], unique_words);

        // find occ and add to u array
        if (!u_check) {
            response = find_occ(token[i], token);
            unique_words[u] = token[i];
            u_counts[u] = response;
            ++u;
        } else {
            // How many times keywords appears in text
            // response = find_occ(token[i], token);
            // u_counts[u] = token[i];
            // ++u;
        }
    };

    for (i = 0; unique_words[i] != '\0'; i++) {
        printf("Word: %s Count: %d\n", unique_words[i], u_counts[i]);
        free(&*unique_words[i]);
        // printf("Word: %s Add: %p - _clean\n", unique_words[i], &*unique_words[i]);
    };

    // for (i = 0; unique_words[i] != '\0'; i++) {

    //     printf("Word: %s Add: %p - in_unique\n", unique_words[i], &*unique_words[i]);

    //     // printf("Word: %s\n", unique_words[i]);
    // };

    // for (i = 0; token[i] != '\0'; i++) {
    //     free(&*token[i]);
    // };

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