#ifndef EKONOMI_H
#define EKONOMI_H
#include <iostream>
using namespace std;

const double pajak = 0.1;

typedef struct {
	int harga,totalharga,jawab;
} PPN;

typedef struct {
	double netto,bruto,jmlh,hasil;
} Tara;

typedef struct {
	int PendapatanUsaha,BebanUsaha,TotalLaba,total;
} Laba;

double hitungPPN (PPN hrg);
void generateDataPPN (PPN &hrg);
void tulisPertanyaanPPN(PPN hrg);
void bacaJawabanPPN(PPN &hrg);
bool cekJawabanPPN(PPN hrg);

double hitungPersentaseTara (Tara prs);
void generateDataTara(Tara &prs);
void tulisPertanyaanTara(Tara prs);
void bacaJawabanTara(Tara &prs);
bool cekJawabanTara(Tara prs);

double hitungLaba(Laba per);
void generateDataLaba(Laba &per);
void tulisPertanyaanLaba(Laba per);
void bacaJawabanLaba(Laba &per);
bool cekJawabanLaba(Laba per);


#endif