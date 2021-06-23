#include <time.h>
#include <iostream>
#include "modules/bunga.h"
#include "modules/main.h"
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void soalBunga(satuan &bank, struct account *acc){
	long int jawaban;
	srand(time(NULL));
	bank.modal = ((rand() % 20) + 1) *10000000;
	bank.bunga = (rand() % 10) + 1;
	bank.bulan = (rand() % 12) + 1;
	 
	cout << "Tabungan awal ";
	cout << bank.modal << endl;
	cout << "Bunga per bulannya ";
	cout << bank.bunga << endl;
	cout << "Waktu menabungnya ";
	cout << bank.bulan << " bulan" << endl;
	
	cout << "Masukkan nilai tabungan akhir: ";
	cin >> jawaban;
	if (hitungbunga(bank) == jawaban) {
		acc->point++;
		cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
	} else {
		cout << "Jawaban Anda salah. Jawaban yang benar " << hitungbunga(bank) << ".\nPoint Anda sekarang " << acc->point << " point\n";
	}
	save_point(acc);
}

long int hitungbunga(satuan bank){
    bank.bungakhir = bank.modal + (bank.modal * ((bank.bunga)/100) *bank.bulan);
    return bank.bungakhir;
}

void tulisBunga(satuan bank){
	cout << bank.bungakhir;
}