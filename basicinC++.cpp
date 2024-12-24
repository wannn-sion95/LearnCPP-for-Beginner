#include <iostream>
using namespace std;

int main()
{
    int angka;
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka);
    printf("Masukkan angka kedua: ");
    int angka2;
    scanf("%d", &angka2);
    int hasil = angka + angka2;
    cout << "Hasil penjumlahan dari " << angka << " + " << angka2 <<  " = " <<   hasil  << endl;
}
