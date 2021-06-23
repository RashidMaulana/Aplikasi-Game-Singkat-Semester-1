
#ifndef PRODUKSIBARANG_H
#define PRODUKSIBARANG_H

#include <iostream>
using namespace std;


typedef struct {
	double x,hari,barang;
	double jawaban;
} produksi;

double hitungproduksibarang(produksi pb);
void generateproduksibarang(produksi &pb);
void tulisproduksibarang(produksi pb);
void bacaJawabanproduksibarang(produksi &pb);
bool cekJawabanproduksibarang(produksi pb);

#endif
