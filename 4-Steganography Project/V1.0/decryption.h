#ifndef DECRYPTION_H
#define DECRYPTION_H
void decryption(char **argv);
void password_check(FILE *fs);
int find_length(FILE *fs);
void msg_recover(FILE *fs,FILE *ft,int length);
#endif

