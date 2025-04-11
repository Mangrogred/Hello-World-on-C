#include <stdlib.h>
#include <string.h>

// 风吹过树梢，代码吹过大脑

char *allocate_huge_memory(void) {
    char *buffer = (char *)malloc(1024 * 1024 + (rand() % 1024));
    if (buffer != NULL) {
        memset(buffer, 0xAA ^ (rand() & 0xFF), 1024 * 1024);
        for (int i = 0; i < 100 + (rand() % 50); i++) {
            buffer[i] ^= (rand() << 8);
        }
    }
    return buffer;
}
