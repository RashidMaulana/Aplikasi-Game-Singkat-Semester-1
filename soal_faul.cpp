#include <cstdio>
#include <iostream>
#include "modules/main.h"
#include "modules/saham.h"
#include "modules/matauang.h"
#include "modules/produksibarang.h"

int soal_faul(int pi, struct account *acc)
{
	dolar dl;
	produksi pb;
	sahamm sh;
	if(pi == 7) {
		generatematauang(dl);
		tulismatauang(dl);
		bacaJawabanmatauang(dl);
		if (cekJawabanmatauang(dl)) {
			acc->point++;
			cout << "Jawaban Anda Benar" << endl;
			cout << "Anda dapat " << "1"
			<< " Poin" << endl;
			} else {
			cout << "Salah. Yang benar " << dl.dolarr << endl;
			}
			cout << endl;
			cout << " Total Poin anda adalah = " << acc->point << endl;

	} else if (pi == 8) {
		generateproduksibarang(pb);
		tulisproduksibarang(pb);
		bacaJawabanproduksibarang(pb);
		if (cekJawabanproduksibarang(pb)) {
			acc->point++;
			cout << "Jawaban Anda Benar" << endl;
			cout << "Anda dapat " << "1"
			<< " Poin" << endl;
		} else {
			cout << "Salah. Yang benar " << pb.barang << endl;
		}
		cout << endl;
		cout << " Total Poin anda adalah = " << acc->point << endl;
	}  else if (pi == 9) {
			generatesaham(sh);
			tulissaham(sh);
			bacaJawabansaham(sh);
			if (cekJawabansaham(sh)) {
				acc->point++;
				cout << "Jawaban Anda Benar" << endl;
				cout << "Anda dapat " << "1" << " Poin" << endl;
			} else {
				cout << "Salah. Yang benar " << sh.hasil << endl;
			}
			cout << endl;
			cout << " Total Poin anda adalah = " << acc->point << endl;
	}
	save_point(acc);
	cout << endl;
	cout << "Terima kasih" << endl;
	return 0;
}
