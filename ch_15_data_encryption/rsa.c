#include "encrypt.h"

static Huge modexp(Huge a, Huge b, Huge n)
{
    Huge y;
    y = 1;
    while (b != 0) {
        if (b & 1) {
            y = (y * a) % n;
        }
        a = (a * a) % n;
        b = b >> 1;
    }
    return y;
}

void rsa_encipher(Huge plaintext, Huge *ciphertext, RsaPubKey pubkey)
{
    return;
}

void rsa_decipher(Huge ciphertext, Huge *plaintext, RsaPriKey prikey)
{
    return;
}
