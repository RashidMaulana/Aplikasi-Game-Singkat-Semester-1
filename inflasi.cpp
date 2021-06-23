#include <time.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "modules/inflasi.h"
#include "modules/main.h"

void bacaInflasi(flat &hore, struct account *acc)
{
	double jawaban;
	srand(time(NULL));
	hore.ihkn = ((rand() % 10) + 1);
	srand(time(NULL));
	hore.ihko = ((rand() % 5) *2 ) - 1;
	
	cout << "IHK pada tahun kemarin ialah ";
	cout << hore.ihkn << endl;
	cout << "IHK pada tahun ini ialah ";
	cout << hore.ihko << endl;
	cout << "Masukkan jawaban Anda: ";
	cin >> jawaban;
	if (inflasi(hore) == jawaban) {
		acc->point++;
		cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
	} else {
		cout << "Jawaban Anda salah. Jawaban yang benar " << inflasi(hore) << ".\nPoint Anda sekarang " << acc->point << " point\n";
	}
	save_point(acc);
}

double inflasi(flat hore){
    hore.hasilinflasi = ((((hore.ihkn-hore.ihko)/hore.ihko))*100);
    return hore.hasilinflasi;
    }

void tulisInflasi(flat hore){
	cout << hore.hasilinflasi;
}