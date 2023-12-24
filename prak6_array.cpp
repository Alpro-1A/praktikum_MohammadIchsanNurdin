#include <iostream>
using namespace std;
int main () {
    int jumlah_array;
    cout << "Mencari nilai terbesar" << endl;
    cout << "======================" << endl;
    cout << "masukan jumlah array: ";
    cin >> jumlah_array;
    int array[jumlah_array], nilai_array, max_num;
    cout << "masukan " << jumlah_array << " angka ( setiap angka dipisahkan oleh enter)" << endl;

    for (int i = 0; i < jumlah_array; i++) {
        cin >> array[i];
    }
    cout << "======================";
    cout << endl;
    int maxVal = array[0];
    int maxIndex = 0;

    for (int i = 1; i < jumlah_array; ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
            maxIndex = i;
        }
    }

    cout << "Nilai tertinggi dalam array: " << maxVal << endl;
    if (maxVal == array[maxIndex]) {
        cout << "Nilai tersebut ada dalam array pada indeks: " << maxIndex << endl;
    } else {
        cout << "Nilai tersebut tidak ditemukan dalam array." << endl;
    }

    return 0;
}