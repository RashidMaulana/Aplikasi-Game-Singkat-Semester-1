#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include "modules/produksibarang.h"
using namespace std;

double hitungproduksibarang(produksi pb) {
	pb.barang = pb.x * pb.hari;
	return pb.barang;
}

void generateproduksibarang(produksi &pb) {
	srand(time(NULL));
	pb.x = rand() % 20+1;			// random soal
	pb.hari = rand() % 20+1;
		
	pb.barang = hitungproduksibarang(pb);		// siapkan jawaban benar
}

void tulisproduksibarang(produksi pb) {
	cout << "Suatu perusahaan dapat memproduksi "<<pb.x<<" dalam sehari. Maka dalam "<<pb.hari<<" hari, berapa banyak yang diproduksi?"<<endl;
}

void bacaJawabanproduksibarang(produksi &pb) {
	cout << "Jawab: Q = ";
	cin >> pb.jawaban;
}

bool cekJawabanproduksibarang(produksi pb) {
	if (pb.jawaban==pb.barang) return true;
	else return false;
}
