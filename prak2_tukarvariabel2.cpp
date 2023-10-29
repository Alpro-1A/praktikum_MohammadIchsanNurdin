#include <iostream>
using namespace std;
int main () {
    // menukar nilai variabel tanpa menggunakan variabel tambahan
    // misalkan firstValue = a, dan secondValue = b
    int a, b;

    a = 10;
    b = 8;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
