#include <iostream>
using namespace std;

float luasPersegiPanjang(float p, float l) {
    return p * l;
}
float luasSegitiga(float a, float t) {
    return 0.5 * a * t;
}
float luasLingkaran(float r) {
    return 3.14 * r * r;
}
int main() {
    float panjang, lebar, tinggi, jejari, alas;
    int pilihan;

    cout << "=================";
    cout << "\n=====M E N U=====";
    cout << "\n=================";

    cout << "\n1 Luas Perseggi Panjang" << endl;
    cout << "2 Luas Segitiga" << endl;
    cout << "3 Luas Lingkaran" << endl;
    cout << "4 Exit" << endl;

    cout << "Masukan Pilihan" << endl;
    cout << "\nPilihan (1/2/3/4) : ";
    cin >> pilihan;