#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    
    cout << "masukan nilai a: ";
    cin>> a;
    cout << "masukan nilai b: ";
    cin >> b;
    cout << "masukan nilai c: ";
    cin >> c;

    if (a>b) {
        if (a>c) {
        cout << "nilai terbesar adalah " << a;
    }
        }
    else if (b>a) {
        if (b>c) {
        cout << "nilai terbesar adalah " << b;
    }
        }
    else {
        cout << "nilai terbesar adalah " << c;
    }
return 0;
}