
#ifndef MATAUANG_H
#define MATAUANG_H

#include <iostream>
using namespace std;


typedef struct {
	double dolarr;
	double dolar;
	double jawaban;
} dolar;

double hitungmatauang(dolar dl);
void generatematauang(dolar &dl);
void tulismatauang(dolar dl);
void bacaJawabanmatauang(dolar &dl);
bool cekJawabanmatauang(dolar dl);

#endif
