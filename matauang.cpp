#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include "modules/matauang.h"
using namespace std;

double hitungmatauang(dolar dl) {
	dl.dolarr = dl.dolar * 14000;
	return dl.dolarr;
}

void generatematauang(dolar &dl) {
	srand(time(NULL));
	dl.dolar = rand() % 1000+1;			// random soal
		
	dl.dolarr = hitungmatauang(dl);		// siapkan jawaban benar
}

void tulismatauang(dolar dl) {
	cout << "Konversikan mata uang dolar ke Rupiah. USD"<<dl.dolar<<" = "<<endl;
}

void bacaJawabanmatauang(dolar &dl) {
	cout << "Jawab: Q = Rp.  ";
	cin >> dl.jawaban;
}

bool cekJawabanmatauang(dolar dl) {
	if (dl.jawaban==dl.dolarr) return true;
	else return false;
}
