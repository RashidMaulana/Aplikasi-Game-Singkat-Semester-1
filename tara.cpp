#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "modules/ekonomi.h"
using namespace std;

double hitungPersentaseTara (Tara prs) {
		prs.hasil = (prs.bruto-prs.netto)/100;
		return prs.hasil;
}
void generateDataTara(Tara &prs){
	prs.bruto = rand()%1000 + 100;
	prs.netto = rand()%100 + 50;
	
	prs.hasil = hitungPersentaseTara(prs);
}
void tulisPertanyaanTara(Tara prs){
	cout << "Hitunglah persentase tara" << endl;
	cout << "Jika diketahui bruto : " << prs.bruto << endl;
	cout << "Jika diketahui netto : " << prs.netto << endl;
}
void bacaJawabanTara(Tara &prs){
	cout << "Jawab : ";
	cin >> prs.jmlh;
}
bool cekJawabanTara(Tara prs){
	if (prs.jmlh==prs.hasil)
		return true; 
		else return false;
}