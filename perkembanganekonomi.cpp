#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "modules/rumus.h"
using namespace std;

void soalPerkembangan(ekonomi &e){
	e.PDBT = ((rand()%10)+1)*10;
    e.PDBTs= ((rand()%10)+1)*10;
	cout<<"Menghitung tingkat perkembangan ekonomi dengan :"<<endl;
	cout<<"Pendapatan nasional riil tahun ini : "<<e.PDBT<<"juta"<<endl;
	cout<<"Pendapatan nasional riil tahun sebelumnya : "<<e.PDBTs<<"juta"<<endl;

}

double hitungPerkembangan(ekonomi &e){
    e.Tingkat=(e.PDBT-e.PDBTs)/e.PDBTs*100;
	return e.Tingkat;
}
void jawabTingkatPerkembangan(ekonomi &e){
	cout<<"Jawabannya adalah : ";
	cin>>e.jawaban;
	cout<<"%";
}

	bool cekJawaban1 (ekonomi e){
        if(e.jawaban == e.Tingkat)return true;
			else return false;
		
}