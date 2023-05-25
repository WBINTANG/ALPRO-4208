#include <iostream>

int recursiveDivision(int dividend, int divisor) {
    // Basis: Jika divisor adalah 0, hasilnya tidak terdefinisi
    if (divisor == 0) {
        std::cout << "Error: Pembagian dengan nol tidak diperbolehkan." << std::endl;
        return 0;
    }
    // Basis: Jika dividend kurang dari divisor, hasilnya adalah 0
    if (dividend < divisor) {
        return 0;
    }
    // Basis: Jika dividend sama dengan divisor, hasilnya adalah 1
    if (dividend == divisor) {
        return 1;
    }
    // Rekursif: Kurangi dividend dengan divisor dan panggil rekursif
    return 1 + recursiveDivision(dividend - divisor, divisor);
}

int main() {
    int num1 ,num2;
    std::cout << "Masukkan Angka pertama : ";
    std::cin >> num1;
    std::cout << "Masukkan Angka kedua: ";
    std::cin >> num2;
    int result = recursiveDivision(num1, num2);
    std::cout << "Hasil pembagian rekursif: " << result << std::endl;
    return 0;
}

