
#ifndef SAHAM_H
#define SAHAM_H

#include <iostream>
using namespace std;


typedef struct {
	long int hasil;
	float keuntungan;
	long int modal;
	long int jawaban;
} sahamm;

long int hitungsaham(sahamm sh);
void generatesaham(sahamm &sh);
void tulissaham(sahamm sh);
void bacaJawabansaham(sahamm &sh);
bool cekJawabansaham(sahamm sh);

#endif
