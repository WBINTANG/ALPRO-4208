#include <iostream>

int recursiveSubtraction(int a, int b) {
    // Basis: Jika b adalah 0, kembalikan a
    if (b == 0) {
        return a;
    }
    // Rekursif: Kurangi a dengan 1 dan b dengan 1 secara rekursif
    else {
        return recursiveSubtraction(a - 1, b - 1);
    }
}

int main() {
    int num1, num2;
    std::cout << "Masukkan angka pertama : ";
    std::cin >> num1;
    std::cout << "Masukkan angka kedua : ";
    std::cin >> num2;
    int result = recursiveSubtraction(num1, num2);
    std::cout << "Hasil pengurangan rekursif: " << result << std::endl;
    return 0;
}

