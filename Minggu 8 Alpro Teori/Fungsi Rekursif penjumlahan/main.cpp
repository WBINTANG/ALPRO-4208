#include <iostream>

int penjumlahanRekursif(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + penjumlahanRekursif(n - 1);
  }
}

int main() {
    int num;
    std::cout << "Masukkan angka: ";
    std::cin >> num;
    int sum = penjumlahanRekursif(num);
    std::cout << "Penjumlahan rekursif dari 1 sampai " << num << " adalah " << sum << std::endl;
    return 0;
}
