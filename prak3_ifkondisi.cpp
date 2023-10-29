#include <iostream>
using namespace std;
int main () {
    int nilai;
    
    cout << "masukan nilai anda: ";
    cin >> nilai;

    if (nilai<=100) {
        if (nilai>=90) {
            cout << "Selamat! Anda mendapat nilai A";
        }
    }
    if (nilai<=89) {
        if (nilai>=80) {
            cout << "Selamat! Anda mendapat nilai B";
        }
    }
    if (nilai<=79) {
        if (nilai>=70) {
            cout << "Selamat! Anda mendapat nilai C";
        }
    }
    if (nilai<=69) {
        if (nilai>=60) {
            cout << "Selamat! Anda mendapat nilai D";
        }
    }
    if (nilai<60) {
        if (nilai>=0) {
            cout << "Selamat! Anda mendapat nilai E";
        }
    }
return 0;
}