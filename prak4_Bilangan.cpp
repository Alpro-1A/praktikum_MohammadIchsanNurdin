#include <iostream>
using namespace std;
int main () {
    int kode;
    cout << "====Ingin mengetahui bilangan apa====" << endl;
    cout << "1. Bilangan Ganjil" << endl;
    cout << "2. Bilangan Genap" << endl;
    cout << "3. Bilangan Prima" << endl;
    cout << "4. Bilangan Ganjil Beserta Jumlahnya" << endl;
    cout << "5. Bilangan Genap Beserta Jumlahnya" << endl;
    cout << "6. Bilangan Prima Beserta Jumalahnya" << endl;
    cout << "======================================" << endl;
    cout << "masukan kode angka 1-6 : " ;
    cin >> kode;

int n, jumlah = 0;
    switch (kode) {
        case 1:
            cout << "=====Bilangan Ganjil dari 1 sampai n=====" << endl;
            cout << "masukan nilai n : ";
            cin >> n;

            for (int i = 1; i <= n; i++) {
                if (i % 2 != 0){
                    cout << i << " ";
                }
            }
        break;
        case 2 :
            cout << "=====Bilangan Genap dari 1 sampai n=====" << endl;
            cout << "masukan nilai n : ";
            cin >> n;

            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0) {
                    cout << i << " ";
                }
            }
        break;
        case 3:
            cout << "=====Bilangan Prima dari 1 sampai n=====" << endl;
            cout << "masukan nilai n : ";
            cin >> n;

            for (int i = 1; i <= n; i++) {
                int k = 0;
                for (int j = 1; j <= i; j++) {
                    if (i % j == 0) {
                        k = k + 1;
                    }
                }
                    if (k == 2) {
                        cout << i << " ";
                    }
            }
        break;
        case 4:
            cout << "=====Bilangan Ganjil dari 1 sampai n beserta jumlahnya=====" << endl;
            cout << "masukan nilai n : ";
            cin >> n;

            for (int i = 1; i <= n; i++) {
                if (i % 2 != 0){
                    cout << i << " ";
                    jumlah += i;
                }
            }
            cout << endl;
            cout <<"jumlahnya adalah " << jumlah;
        break;
        case 5:
            cout << "=====Bilangan Genap dari 1 sampai n=====" << endl;
            cout << "masukan nilai n : ";
            cin >> n;

            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0) {
                    cout << i << " ";
                    jumlah +=i;
                }
            }
            cout << endl;
            cout << "jumlahnya adalah " << jumlah;
        break;
        case 6:
            cout << "=====Bilangan Prima dari 1 sampai n=====" << endl;
            cout << "masukan nilai n : ";
            cin >> n;

            for (int i = 1; i <= n; i++) {
                int k = 0;
                for (int j = 1; j <= i; j++) {
                    if (i % j == 0) {
                        k = k + 1;
                    }
                }
                    if (k == 2) {
                        cout << i << " ";
                        jumlah += i;
                    }
            }
            cout << endl;
            cout << "jumlahnya adalah " << jumlah;
    }
    return 0;
}