#include <iostream>
using namespace std;
int main () {
    // menukar nilai variabel menggunakan variabel tambahan
    // misalkan firstValue = a,secondValue = b, dan c adalah variabel tambahan
    int a, b, c;

    a = 10;
    b = 8;

    c = a;
    a = b;
    b = c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}