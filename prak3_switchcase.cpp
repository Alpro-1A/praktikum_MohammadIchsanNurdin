#include <iostream>
using namespace std;
int main() {
    int pil;
    double x= 0.5;
    double a, p, l, t, s;
    
    cout << "===============Ingin mencari luas apa?===============" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "===============Tulis dalam bentuk angka===============" << endl;
    cout << "Ingin mencari luas : ";
    cin >> pil;

    switch (pil) {
        case 1:
            cout << "===============Menghitung Luas Persegi===============" << endl;
            cout << "masukan nilai sisi : " << endl;
            cin >> s;
            cout << "luas perseginya = " << s * s << endl;
            cout << "===============Menghitung Luas Persegi===============";
        break;
        case 2:
            cout << "===============Menghitung Luas Persegi Panjang===============" << endl;
            cout << "masukan nilai panjang : " << endl;
            cin >> p;
            cout << "masukan nilai lebar : " << endl;
            cin >> l;
            cout << "luas persegi panjangnya = " << p * l << endl;
            cout << "===============Menghitung Luas Persegi Panjang===============";
        break;
        case 3:
            cout << "===============Menghitung Luas Segitiga===============" << endl;
            cout << "masukan nilai alas : " << endl;
            cin >> a;
            cout << "masukan nilai tinggi : " << endl;
            cin >> t;
            cout << "luas segitiganya = " << x * a * t << endl;
            cout << "===============Menghitung Luas Segitiga===============";
        break;
        default:
        cout << "dalam tahap pengembangan, tidak dapat diteruskan";
    }
    cout << endl << endl << "=========selesai==========";


}
