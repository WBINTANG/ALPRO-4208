#include <iostream>

int recursiveMultiplication(int a, int b) {
    // Basis: Jika salah satu angka adalah 0, kembalikan 0
    if (a == 0 || b == 0) {
        return 0;
    }
    // Rekursif: Tambahkan a dengan hasil perkalian a dengan b-1 secara rekursif
    else {
        return a + recursiveMultiplication(a, b - 1);
    }
}

int main() {
    int num1, num2;
    std::cout << "Masukkan angka pertama : ";
    std::cin >> num1;
    std::cout << "Masukkan angka kedua : ";
    std::cin >> num2;
    int result = recursiveMultiplication(num1, num2);
    std::cout << "Hasil perkalian rekursif: " << result << std::endl;
    return 0;
}

