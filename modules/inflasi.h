#ifndef INFLASI_H
#define INFLASI_H

#include <iostream>
using namespace std;
typedef struct{
	double ihkn, ihko, hasilinflasi;
	} flat;
void bacaInflasi(flat &hore, struct account *acc);
double inflasi(flat hore);
void tulisInflasi(flat hore);

#endif