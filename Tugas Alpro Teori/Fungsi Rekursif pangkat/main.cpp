#include <iostream>

double recursivePower(double base, int exponent) {
    // Basis: Jika exponent adalah 0, hasilnya adalah 1
    if (exponent == 0) {
        return 1;
    }
    // Rekursif: Kalikan base dengan hasil perpangkatan base^(exponent-1) secara rekursif
    else {
        return base * recursivePower(base, exponent - 1);
    }
}

int main() {
    double num1;
    int num2;
    std::cout << "Masukkan Angka : ";
    std::cin >> num1;
    std::cout << "Masukkan pangkat : ";
    std::cin >> num2;
    double result = recursivePower(num1, num2);
    std::cout << "Hasil perpangkatan rekursif: " << result << std::endl;
    return 0;
}
