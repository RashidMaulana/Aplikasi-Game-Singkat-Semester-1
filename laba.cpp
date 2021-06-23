#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "modules/ekonomi.h"
using namespace std;

double hitungLaba(Laba per) {
	per.TotalLaba = per.PendapatanUsaha-per.BebanUsaha;
	return per.TotalLaba;
}
void generateDataLaba(Laba &per){
	per.PendapatanUsaha = rand()%100000000 + 100000;
	per.BebanUsaha = rand()%100000000 + 100000;

	per.TotalLaba = hitungLaba(per);
}
void tulisPertanyaanLaba(Laba per){
	cout << "Hitunglah laba perusahaan jika diketahui" << endl;
	cout << "Pendapatan Usaha : " << per.PendapatanUsaha << endl;
	cout << "Beban Usaha : " << per.BebanUsaha << endl;
}
void bacaJawabanLaba(Laba &per){
	cout << "Laba perusahaan : ";
	cin >> per.total;
}
bool cekJawabanLaba(Laba per){
	if (per.total==per.TotalLaba)
		return true; 
		else return false;
	
}
