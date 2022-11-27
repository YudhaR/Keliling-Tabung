#include <iostream>

/*
    Program Tabung
    Ket : Program Mencari Keliling, Luas, dan Volume Tabung
    By  : Yudha Rizqia Grafer
    Tgl : 14 September 2022

*/

using namespace std;

int main()
{
    //Kamus
    float r, t, keliling, luas, volume;
    r = 14;
    t = 10;
    const float pi = 3.14;

    //Algoritma
    keliling = 2 * pi * r;
    luas = 2 * pi * r * r;
    volume = pi * r * r * t;
    cout << "Program Mencari Keliling Alas, Luas dan Volume Tabung" << endl;
    cout << "=================================================" << endl;
    cout << "Keliling = " << keliling << endl;
    cout << "Luas = " << luas <<endl;
    cout << "volume = " << volume <<endl;
    return 0;
}
