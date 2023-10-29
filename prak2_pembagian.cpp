#include <iostream>
using namespace std;
int main () {
    // n adalah banyak ekor bebek yang dipunya pak tatang
    // m adalah banyak teman yang ingin dibagi bebek oleh pak tatang
    // s adalah sisa bebek pak tatang yang tidak habis dibagi ke teman-temannya
    int n, m, s;
    n = 52;
    m = 6;

    cout << "banyak bebek yang diterima masing masing teman pak tatang" << endl;
    cout << "= " << n << "/" << m << endl;
    cout << "= " << n/m << " ekor" << endl << endl;
    cout << "sisa bebek pak tatang" << endl;
    cout << "= " << n << "%" << m << endl;
    cout << "= " << n%m << " ekor";

    return 0;
}