#include <iostream>
using namespace std;

// Variabel global
int angka;
int pilihan;

// Function untuk cek bilangan prima
bool isPrima(int n) {
    if (n <= 1) return false;