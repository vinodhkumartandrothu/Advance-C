#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#define GENERATE_PASSWORD random() % 10000
void encryption(char **argv);
int get_data_length(FILE *);
void encrypt_pwd_length(FILE *fs, FILE *fd, int info);

void encrypt_msg(FILE *fs, FILE *fd, FILE *ft);
#endif
