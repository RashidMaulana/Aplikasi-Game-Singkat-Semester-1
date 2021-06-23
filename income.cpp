#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "modules/rumus.h"
using namespace std;

void soalPendapatanNasionalIA(ekonomi &e){
	e.s = ((rand()%10)+1)*1000000;
    e.r = ((rand()%10)+1)*1000000;
    e.i = ((rand()%10)+1)*1000000;
    e.p = ((rand()%10)+1)*1000000;
	cout<<"Menghitung pendapatan nasional dengan income approach :"<<endl;
	cout<<"Pendapatan bersih dari sewa : "<<e.s<<endl;
	cout<<"Pendapatan dari gaji :  "<<e.r<<endl;
	cout<<"Pendapatan dari bunga : "<<e.i<<endl;
	cout<<"Pendapatan dari perusahaan dan usaha perorangan : "<<e.p<<endl;

}

double hitungPendapatanNasionalIA(ekonomi &e){
    e.YI=e.s+e.r+e.i+e.p;
	return e.YI;
}
void jawabPendapatanNasionalIA(ekonomi &e){
	cout<<"Jawabannya adalah : ";
	cin>>e.jawaban;
}

	bool cekJawaban2 (ekonomi e){
        if(e.jawaban == e.YI) return true;
			else return false;
}