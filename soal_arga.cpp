#include <cstdio>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "modules/main.h"
#include "modules/rumus.h"
using namespace std;

long int soal_arga (int pi, struct account *acc){
	ekonomi e;
	if(pi == 10) {
		soalPerkembangan(e);
		hitungPerkembangan(e);
		jawabTingkatPerkembangan(e);
		if (cekJawaban1(e)) {
			acc->point++;
			cout << "Jawaban Anda Benar" << endl;
			cout << "Anda dapat " << "1"
			<< " Poin" << endl;
			} else {
			cout << "Salah. Yang benar " << e.Tingkat << endl;
			}
			cout << endl;
			cout << " Total Poin anda adalah = " << acc->point << endl;

	} else if (pi == 11) {
		soalPendapatanNasionalIA(e);
		hitungPendapatanNasionalIA(e);
		jawabPendapatanNasionalIA(e);
		if (cekJawaban2(e)) {
			acc->point++;
			cout << "Jawaban Anda Benar" << endl;
			cout << "Anda dapat " << "1"
			<< " Poin" << endl;
		}	 else {
			cout << "Salah. Yang benar " << e.YI << endl;
		}
		cout << endl;
		cout << " Total Poin anda adalah = " << acc->point << endl;
	}  else if (pi == 12) {
			soalPendapatanNasionalEA(e);
			hitungPendapatanNasionalEA(e);
			jawabPendapatanNasionalEA(e);
			if (cekJawaban3(e)) {
				acc->point++;
				cout << "Jawaban Anda Benar" << endl;
				cout << "Anda dapat " << "1" << " Poin" << endl;
			} else {
				cout << "Salah. Yang benar " << e.YE << endl;
			}
			cout << endl;
			cout << " Total Poin anda adalah = " << acc->point << endl;
	}

	save_point(acc);
	cout << endl;
	cout << "Terima kasih" << endl;
	return 0;
}
