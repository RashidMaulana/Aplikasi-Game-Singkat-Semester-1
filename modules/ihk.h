#ifndef IHK_H
#define IHK_H
#include <iostream>
using namespace std;
typedef struct{
	double Pn, Po, hasil;
	} rumus;
void bacaihk(rumus &enak, struct account *acc);
double ihk(rumus enak);
void tulisihk (rumus enak);

#endif