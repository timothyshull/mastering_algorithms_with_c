#include "hashpjw.h"

int hashpjw(const void *key)
{
    const char *ptr;
    int val;
    val = 0;
    ptr = key;
    int tmp;
    while (*ptr != '\0') {
        val = (val << 4) + (*ptr);
        tmp = (val & 0xf0000000);
        if (tmp) {
            val = val ^ (tmp >> 24);
            val = val ^ tmp;
        }
        ptr++;
    }
    return val % PRIME_TBLSIZ;
}
