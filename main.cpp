#include <time.h>
#include <cstdio>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
#include "modules/main.h"
#include "modules/bunga.h"
#include "modules/ihk.h"
#include "modules/inflasi.h"
#include "modules/rumus.h"

using namespace std;

#define clr system("cls")
#define database_account "account.dat"

int main() {
	first_page();
	return 0;
}

void first_page() {
	int pilihan;
	cout << "=================================\n";
	cout << "1. Registrasi\n";
	cout << "2. Login\n";
	cout << "=================================\n";
	cout << "Masukkan pilihan: ";
	cin >> pilihan;
	cin.ignore();
	switch (pilihan) {
		case 1: registrasi(); break;
		case 2: login(); break;
	}
	clr; first_page();
}

void second_page(struct account *acc) { resecond_page:
	int pilihan; clr;
	cout << "=== Menu aplikasi ====\n";
	cout << "Point Anda saat ini: " << acc->point << " point\n";
	cout << "1. Mengerjakan soal berdasarkan rumus\n";
	cout << "2. Mengerjakan soal acak\n";
	cout << "3. Tampilkan high score\n";
	cout << "0. Keluar\n";
	cout << "=======================\n";
	cout << "Masukkan pilihan menu: ";
	cin >> pilihan;
	cin.ignore();
	switch (pilihan) {
		case 0:
			return; break;
		case 1: opt_1(false, acc); break;
		case 2: opt_1(true, acc); break;
		case 3: show_high_score(); break;
	}
	goto resecond_page;
}

void registrasi() {
	char x, cpassword[64]; FILE *handle;
	struct account acc; memset(&acc, '\0', sizeof(acc));
	cout << "Masukkan nama Anda: ";
	fgets(acc.nama, 64, stdin);
	cout << "Buat username Anda: ";
	fgets(acc.username, 64, stdin); create_password:
	cout << "Buat password Anda: ";
	fgets(acc.password, 64, stdin);
	cout << "Ketik ulang password: ";
	fgets(cpassword, 64, stdin);
	acc.nama[strlen(acc.nama) - 1] = acc.password[strlen(acc.password) - 1] = acc.username[strlen(acc.username) - 1] = cpassword[strlen(cpassword) - 1] = '\0';
	if (!strcmp(acc.password, cpassword)) {
		handle = fopen(database_account, "ab");
		fwrite(&acc, sizeof(acc), 1, handle);
		fclose(handle);
		cout << "Registrasi berhasil!\n";
		cout << "Tekan enter untuk melanjutkan!\n"; x = getchar();
	} else {
		cout << "Ketik ulang password salah, ulangi membuat password\n\n"; goto create_password;
	}
}

void login() {
	FILE *handle;
	bool ok = false;
	struct account acc, in;
	handle = fopen(database_account, "rb");
	cout << "Masukkan username: ";
	fgets(in.username, 64, stdin);
	cout << "Masukkan password: ";
	fgets(in.password, 64, stdin);
	in.username[strlen(in.username) - 1] = in.password[strlen(in.password) - 1] = '\0';
	while (!feof(handle)) {
		if (fread(&acc, sizeof(acc), 1, handle) == 0) {
			break;
		}if ((!strcmp(in.username, acc.username)) && (!strcmp(in.password, acc.password))) {
			ok = true;
			break;}
	}
	fclose(handle);
	if (ok) {
		cout << "Login berhasil!\n"; second_page(&acc);
	} else cout << "Login gagal\n";
}

void opt_1(bool random, struct account *acc)
{
	int pilihan;
re_opt_1: if (random) {
		srand(time(NULL)); pilihan = (rand() % 12) + 1;
	} else {
		cout << "========== Pilihan soal ===========\n";
		cout << "1. Bunga Tunggal\n2. Indeks harga konsumen\n3. Inflasi\n4. Menghitung PPN\n5. Menghitung laba\n6. Menghitung presentase tara\n7. Konversi mata uang\n8. Menghitung produksi barang\n9. Saham\n10. Perkembangan Ekonomi\n11. Pendapatan Nasional Income Approach\n12. Pendapatan Nasional Expenditure Approach\n0. Keluar\n===========================================\nMasukkan pilihan soal: ";
		cin >> pilihan;
	} switch (pilihan) {
		case 0: return; break;
		case 1: satuan st; soalBunga(st, acc); break;
		case 2: rumus stx; bacaihk(stx, acc); break;
		case 3: flat sty; bacaInflasi(sty, acc); break;
		case 4: case 5: case 6: soal_agas(pilihan, acc); break;
		case 7: case 8: case 9: soal_faul(pilihan, acc); break;
		case 10: case 11: case 12: soal_arga (pilihan, acc); break;
		default: cout << "Pilihan tidak tersedia\n"; break;
	}if (random) {
		cin.ignore(); cout << "Tekan enter untuk melanjutkan!\n";
		getchar(); return;
	} goto re_opt_1;
}

void save_point(struct account *in)
{
	FILE *handle;
	bool ok = false;
	struct account acc;
	handle = fopen(database_account, "rb+");
	while (!feof(handle)) {
		if (fread(&acc, sizeof(acc), 1, handle) == 0) {
			break;
		}
		// printf("\"%s\" = \"%s\"\n", in.username, acc.username);
		// printf("\"%s\" = \"%s\"\n\n", in.password, acc.password);
		if ((!strcmp(in->username, acc.username)) &&
			(!strcmp(in->password, acc.password))) {
			fseek(handle, ftell(handle) - sizeof(struct account), SEEK_SET);
			fwrite(in, sizeof(struct account), 1, handle);
			ok = true;
			break;
		}
	}
	fclose(handle);
}

void show_high_score()
{
	clr; char buff[2048]; FILE *handle, *h2 = fopen("score.txt", "w");
	struct account acc, arr[100]; int i = 1, p = 0, sorted[100];
	memset(sorted, '\0', sizeof(sorted));
	handle = fopen(database_account, "rb+");
	while (!feof(handle)) {
		if (fread(&acc, sizeof(acc), 1, handle) == 0) break;
		arr[p] = acc; sorted[p] = acc.point; p++; i++;
	}
	fclose(handle); sort(sorted, sorted + sizeof(int), greater<int>());
	for (int l = 1, k = 0, i = 0; i < p; i++) {
		for (int j = 0; j < p; j++) {
			if (sorted[i] == arr[j].point) {
				cout << (k + 1) << ". (" << arr[j].point << " point) " << arr[j].username << endl;
				sprintf(buff, "%d|%s|%d\n", l++, arr[j].nama, arr[j].point);
				arr[j].point = -1; k++; fwrite(&buff, strlen(buff), 1, h2);
			}
		}
	} fclose(h2); cout << "Tekan enter untuk melanjutkan!\n"; fgets(acc.username, 10, stdin); clr;
}
