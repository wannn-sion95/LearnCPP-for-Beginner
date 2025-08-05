#include <iostream>
int main()
{
    int angkaPertama, angkaKedua;
    std::cout << "--------------------------------------";
    std::cout << "\nSelamat datang di Kalkulator Sederhana\n";
    std::cout << "--------------------------------------";
    std::cout << "\nby Wannn Sion\n";
    std::cout << "Masukkan angka pertama: ";
    std::cin >> angkaPertama;
    std::cout << "Masukkan angka kedua: ";
    std::cin >> angkaKedua;

    std::cout << "Pilih operasi Matematika: \n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n";
    int penjumlahan = 1, pengurangan = 2, perkalian = 3, pembagian = 4;
    int pilihOperasi;
    std::cout << "Masukkan pilihan operasi (1-4): ";
    std::cin >> pilihOperasi;
    if (pilihOperasi == 1)
    {
        std::cout << "Hasil Penjumlahan: " << angkaPertama + angkaKedua;
    }
    else if (pilihOperasi == 2)
    {
        std::cout << "Hasil Pengurangan: " << angkaPertama - angkaKedua;
    }
    else if (pilihOperasi == 3)
    {
        std::cout << "Hasil Perkalian: " << angkaPertama * angkaKedua;
    }
    else if (pilihOperasi == 4)
    {
        std::cout << "Hasil Pembagian: " << angkaPertama / angkaKedua;
    }
    else
    {
        std::cout << "Masukkan operasi yang sesuai tertera ya!";
    }
    return 0;
}
