#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "modules/rumus.h"
using namespace std;

void soalPendapatanNasionalEA(ekonomi &e){
	e.c = ((rand()%10)+1)*1000000;
    e.g = ((rand()%10)+1)*1000000;
    e.inv = ((rand()%10)+1)*1000000;
    e.x = ((rand()%10)+1)*1000000;
    e.m = ((rand()%10)+1)*1000000;
	cout<<"Menghitung pendapatan nasional dengan expenditure approach :"<<endl;
	cout<<"Konsumsi rumah tangga : "<<e.c<<endl;
	cout<<"Pengeluaran pemerintah :  "<<e.g<<endl;
	cout<<"Investasi : "<<e.inv<<endl;
	cout<<"Ekspor : "<<e.x<<endl;
	cout<<"Impor : "<<e.m<<endl;

}
double hitungPendapatanNasionalEA(ekonomi &e){
    e.YE=e.c+e.g+e.inv+(e.x-e.m);
	return e.YE;
}
void jawabPendapatanNasionalEA(ekonomi &e){
	cout<<"Jawabannya adalah : ";
	cin>>e.jawaban;
}

bool cekJawaban3 (ekonomi e){
        if(e.jawaban == e.YE) return true;
		else return false;
}