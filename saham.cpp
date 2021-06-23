#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include "modules/saham.h"
using namespace std;

long int hitungsaham(sahamm sh) {
	sh.hasil = sh.modal * (sh.keuntungan/100) ;
	return sh.hasil;
}

void generatesaham(sahamm &sh) {
	srand(time(NULL));
	sh.modal = rand() % 20*10000000;			// random soal
	sh.keuntungan = rand() % 20+1;
		
	sh.hasil = hitungsaham(sh);		// siapkan jawaban benar
}

void tulissaham(sahamm sh) {
	cout << "Seseorang ingin menanam saham dalam suatu perusahaan dengan modal "<<sh.modal<<endl;
	cout << "dan dijanjikan keuntungan sebesar "<<sh.keuntungan<<" % "<<endl;
	cout << "berapa total keuntungan yang didapat?"<<endl;
}

void bacaJawabansaham(sahamm &sh) {
	cout << "Jawab: Q = ";
	cin >> sh.jawaban;
}

bool cekJawabansaham(sahamm sh) {
	if (sh.jawaban==sh.hasil) return true;
	else return false;
}
