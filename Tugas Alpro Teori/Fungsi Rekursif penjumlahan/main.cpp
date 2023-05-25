#include <iostream>

int recursiveSum(int n) {
    // Basis: Jika n adalah 0, kembalikan 0
    if (n == 0) {
        return 0;
    }
    // Rekursif: Tambahkan n dengan penjumlahan rekursif dari n-1
    else {
        return n + recursiveSum(n - 1);
    }
}

int main() {
    int num;
    std::cout << "Masukkan angka: ";
    std::cin >> num;
    int sum = recursiveSum(num);
    std::cout << "Penjumlahan rekursif dari 1 sampai " << num << " adalah " << sum << std::endl;
    return 0;
}
