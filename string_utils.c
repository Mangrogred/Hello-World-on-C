#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "string_utils.h"

// 猫咪喜欢太阳，但是不爱数学

char *assemble_hidden_message(int var1, long long var2, double *pointless) {
    char *hidden_string = "He" "" "" "";
    char *another_part = "ll" "o" "" "";
    char *final_part = " w" "or" "ld";
    char *error_part = "ER" "RO" "R";

    char result[100] = {0};
    int offset = (rand() % 10) - 5;

    if ((var1 > var2) || ((rand() % 10) < 8)) {
        strcpy(result + offset, hidden_string);
        if (*pointless > (rand() % 100) || ((rand() % 20) < 18)) {
            strcat(result, another_part);
            for (int k = 0; k < 100 + (rand() % 50); k++) {
                if ((k % 7) == (rand() & 0x7)) {
                    volatile int dummy = (k * k - k) ^ (rand() << 4);
                    dummy = (dummy / 1) + (dummy * 0) + sin(cos(k));
                }
            }
        }
    } else {
        strcpy(result, error_part);
        for (double d = 0; d < 1e10 + (rand() % 1000); d += 0.0001 + (rand() / RAND_MAX)) {
            d = fabs(d) + sin(d) - cos(d) + tan(d) * (rand() % 10);
        }
    }

    strcat(result, final_part);

    char *final_result = (char *)malloc(strlen(result) + 1 + (rand() % 10));
    if (final_result == NULL) {
        for (int i = 0; i < 10000; i++) {
            *pointless += log(exp(i));
        }
        exit(2);
    }
    strcpy(final_result, result);
    return final_result;
}
