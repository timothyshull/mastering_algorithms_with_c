#ifndef ENCRYPT_H
#define ENCRYPT_H

typedef unsigned long Huge;

typedef struct RsaPubKey_ {
    Huge e;
    Huge n;
} RsaPubKey;

typedef struct RsaPriKey_ {
    Huge d;
    Huge n;
} RsaPriKey;

void des_encipher(const unsigned char *plaintext, unsigned char *ciphertext, const unsigned char *key);

void des_decipher(const unsigned char *ciphertext, unsigned char *plaintext, const unsigned char *key);

void rsa_encipher(Huge plaintext, Huge *ciphertext, RsaPubKey pubkey);

void rsa_decipher(Huge ciphertext, Huge *plaintext, RsaPriKey prikey);

#endif
