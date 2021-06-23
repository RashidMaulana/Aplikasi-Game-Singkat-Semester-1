#include <iostream>
#include "modules/ihk.h"
#include "modules/main.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void bacaihk( rumus &enak, struct account *acc){
	long int jawaban;
	srand(time(NULL));
	enak.Pn = (((rand() % 20) + 1) * 5000);
	srand(time(NULL));
	enak.Po = (((rand() % 10) + 1) * 10000);
	cout << "Indeks Harga Tahun ke N ";
	cout << enak.Pn << endl;
	cout << "Indeks harga tahun setelahnya ";
	cout << enak.Po << endl;
	cout << "Masukkan jawaban Anda: ";
	cin >> jawaban;
	if (ihk(enak) == jawaban) {
		acc->point++;
		cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
	} else {
		cout << "Jawaban Anda salah. Jawaban yang benar " << ihk(enak) << ".\nPoint Anda sekarang " << acc->point << " point\n";
	}
	save_point(acc);
}

double ihk(rumus enak){
    enak.hasil =(enak.Pn/enak.Po)*100;
    return enak.hasil;
}

void tulisihk (rumus enak){
	cout << enak.hasil;
}