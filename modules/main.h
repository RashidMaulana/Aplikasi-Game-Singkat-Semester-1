#ifndef MAIN_H
#define MAIN_H

struct account {
	char nama[64];
	char username[64];
	char password[64];
	unsigned int point;
};

void login();
void registrasi();
void first_page();
void second_page(struct account *acc);
void opt_1(bool random, struct account *acc);
int soal_faul(int pi, struct account *acc);
int soal_agas(int pi, struct account *acc);
long int soal_arga(int pi, struct account *acc);
void save_point(struct account *acc);
void show_high_score();

#endif
