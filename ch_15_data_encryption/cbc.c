#include <stdlib.h>
#include "bit.h"
#include "cbc.h"
#include "encrypt.h"

void cbc_encipher(const unsigned char *plaintext, unsigned char *ciphertext,
                  const unsigned char *key, int size)
{
    unsigned char temp[8];

    int i;
    des_encipher(&plaintext[0], &ciphertext[0], key);
    i = 8;
    while (i < size) {
        bit_xor(&plaintext[i], &ciphertext[i - 8], temp, 64);
        des_encipher(temp, &ciphertext[i], NULL);
        i = i + 8;
    }
    return;
}

void cbc_decipher(const unsigned char *ciphertext, unsigned char *plaintext,
                  const unsigned char *key, int size)
{
    unsigned char temp[8];

    int i;
    des_decipher(&ciphertext[0], &plaintext[0], key);
    i = 8;
    while (i < size) {
        des_decipher(&ciphertext[i], temp, NULL);
        bit_xor(&ciphertext[i - 8], temp, &plaintext[i], 64);
        i = i + 8;
    }
    return;
}
