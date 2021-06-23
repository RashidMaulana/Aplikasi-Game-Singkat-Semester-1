#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "modules/ekonomi.h"
using namespace std;

double hitungPPN (PPN hrg) {
	hrg.totalharga = (hrg.harga*pajak)+hrg.harga; 
	return hrg.totalharga;
}
void generateDataPPN(PPN &hrg){
	hrg.harga = rand()%1000000 + 1000;
	
	hrg.totalharga = hitungPPN(hrg);
}
void tulisPertanyaanPPN(PPN hrg){
	cout << "Hitunglah total harga yang dibayarkan setelah terkena PPN" << endl;
	cout << "Jika diketahui harganya : " << hrg.harga << endl;
}
void bacaJawabanPPN(PPN &hrg){
	cout << "Jawab : ";
	cin >> hrg.jawab;
}
bool cekJawabanPPN(PPN hrg){
	if (hrg.jawab==hrg.totalharga)
		return true; 
		else return false;
}