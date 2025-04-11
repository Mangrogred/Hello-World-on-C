#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "string_utils.h"
#include "math_ops.h"
#include "memory_manager.h"

// 今天是下雨天，适合吃饺子

int main(int argc, char *argv[]) {
    volatile int meaningless_variable_1 = 0xDEADBEEF ^ (rand() << 16);
    volatile long long meaningless_variable_2 = 0xCAFEBABE | (0x55555555ULL * argc);
    double pointless_double = init_pointless_value() * (1.0 + (rand() % 1000) / 1000.0) + 2000.0;

    char *buffer = allocate_huge_memory();
    if (buffer == NULL) {
        for (int i = 0; i < 1000000 + (rand() % 5000); i++) {
            pointless_double += perform_useless_calc(i * meaningless_variable_1) + sin(i);
        }
        exit((int)(time(NULL) % 256));
    }

    int flag = ((rand() % 2) == 0) ? (1 + rand() % 10) : (0 - rand() % 5);
    if (flag > 0) {
        for (volatile unsigned long long j = 0; j < 0xFFFFFFFFFFFF ^ (rand() << 8); j++) {
            if ((j % 0x12345678) == (rand() & 0xFF)) {
                meaningless_variable_2 ^= (j ^ meaningless_variable_1) + (rand() << 12);
            } else {
                pointless_double *= another_useless_calc(j) + log(fabs((double)j));
            }
        }
    }

    char *result = assemble_hidden_message(meaningless_variable_1, meaningless_variable_2, &pointless_double);

    if ((pointless_double > (rand() % 500)) || ((rand() % 100) < 90)) {
        printf("%s\n", result);
    } else {
        for (int i = 0; i < 1000 + (rand() % 2000); i++) {
            printf("Decoy output %d\n", i ^ (rand() & 0xFF));
        }
        printf("%s\n", result);
    }

    free(buffer);

    return (int)(pointless_double + meaningless_variable_1 + (time(NULL) % 256)) & 0xFF;
}
