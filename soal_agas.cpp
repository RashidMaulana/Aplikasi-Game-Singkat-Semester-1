#include <time.h>
#include <cstdio>
#include <iostream>
#include "modules/ekonomi.h"
#include "modules/main.h"
using namespace std;
int soal_agas(int pi, struct account *acc)
{ 
	PPN m;
	Tara t;
	Laba j;
if (pi == 4){
                PPN m;
                generateDataPPN(m);
                tulisPertanyaanPPN(m);
                bacaJawabanPPN(m);
                if (cekJawabanPPN(m)){	
					acc->point++;
					cout << "Jawaban Anda Benar" << endl;
					cout << "Anda dapat " << "1"
					<< " Poin" << endl;
				} else {
					cout << "Salah. Yang benar " << m.totalharga << endl;
				}
					cout << endl;
					cout << " Total Poin anda adalah = " << acc->point << endl;;
            } else if (pi == 5){
                Tara t;
                generateDataTara(t);
                tulisPertanyaanTara(t);
                bacaJawabanTara(t);
                if (cekJawabanTara(t)){
					acc->point++;
					cout << "Jawaban Anda Benar" << endl;
					cout << "Anda dapat " << "1"
					<< " Poin" << endl;
				} else {
					cout << "Salah. Yang benar " << t.hasil << endl;
				}
			cout << endl;
			cout << " Total Poin anda adalah = " << acc->point << endl;;
					
            } else if (pi == 6){
                Laba j;
                generateDataLaba(j);
                tulisPertanyaanLaba(j);
                bacaJawabanLaba(j);
                if (cekJawabanLaba(j)){
					acc->point++;
					cout << "Jawaban Anda Benar" << endl;
					cout << "Anda dapat " << "1"
					<< " Poin" << endl;
				} else {
					cout << "Salah. Yang benar " << j.TotalLaba << endl;
				}
			cout << endl;
			cout << " Total Poin anda adalah = " << acc->point << endl;;;
            }
			
	save_point(acc);
	cout << endl;
	cout << "Terima kasih" << endl;
	return 0;
}
