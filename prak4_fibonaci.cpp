#include <iostream>
using namespace std;
int main () {
    int n, fn, fn1, fn2;

    /*rumus deret fibonaci
    fn = fn1 +fn2*/
    cout << "deret fibonaci" << endl;
    cout << "masukan nilai n : ";
    cin >> n;

    cout << "masukan nilai deret pertama: ";
    cin >> fn1;
    cout << "masukan nilai deret kedua: ";
    cin >> fn2;
        fn = fn1 + fn2;
        cout << fn1 << " " << fn2 << " ";
        for ( int i = 1; i < n - 1; i++) {
        fn = fn1 + fn2;
        fn1 = fn2;
        fn2 = fn;
        cout << fn << " ";
        }

    return 0;
}