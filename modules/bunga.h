#ifndef BUNGA_H
#define BUNGA_H
#include <iostream>
using namespace std;
typedef struct {
	double bunga;
	long int modal;
	int bulan;
	long int bungakhir;
		} satuan;

	void soalBunga(satuan &bank, struct account *acc);
	long int hitungbunga(satuan bank);
	void tulisBunga(satuan bank);

#endif