#ifndef RUMUS_H
#define RUMUS_H

struct ekonomi {
    float PDBT,PDBTs;
    long int s,r,i,p,YI;
    long int c,g,inv,x,m,YE;
    double laba,modal;
    double Tingkat, Rental;
    double jawaban;
}  ;

bool cekJawaban1(ekonomi e);
bool cekJawaban2(ekonomi e);
bool cekJawaban3(ekonomi e);
bool cekJawaban4(ekonomi e);
void soalPerkembangan(ekonomi &e);
double hitungPerkembangan(ekonomi &e);
void jawabTingkatPerkembangan(ekonomi &e);
void soalPendapatanNasionalIA(ekonomi &e);
double hitungPendapatanNasionalIA(ekonomi &e);
void jawabPendapatanNasionalIA(ekonomi &e);
void soalPendapatanNasionalEA(ekonomi &e);
double hitungPendapatanNasionalEA(ekonomi &e);
void jawabPendapatanNasionalEA(ekonomi &e);

#endif // RUMUS_H

