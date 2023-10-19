#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    a = 10;
    b = 8;

    cout << "== Menukar Nilai Kedua Variable ==" << endl;
    cout << "------------------------------" << endl;
    cout << "       [Nilai Variable]" << endl << endl;
    cout << "Angka Pertama = " << a << endl;
    cout << "Angka Kedua = " << b << endl;
    cout << endl;
    cout << "------------------------------" << endl;

    //Pertukaran Nilai
    c = a;
    a = b;
    b = c;

    cout << "     [Hasil Pertukaran]" << endl << endl;
    cout << "Angka Pertama = " << a << endl;
    cout << "Angka Kedua = " << b << endl << endl;
    cout << "------------------------------" << endl;

    return 0;
}
