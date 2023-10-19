#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "== Menukar Nilai Kedua Variable ==" << endl;
    cout << "------------------------------" << endl;
    cout << "       [Masukan Nilai]" << endl << endl;
    cout << "Angka Pertama = ";
    cin >> a;
    cout << "Angka Kedua = ";
    cin >> b;
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
