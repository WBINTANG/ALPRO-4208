#include <iostream>

int pembagianRekursif(int a, int b) {
  if (a < b) {
    return 0;
  } else {
    return 1 + pembagianRekursif(a - b, b);
  }
}

int main() {
    int num1 ,num2;
    std::cout << "Masukkan Angka pertama : ";
    std::cin >> num1;
    std::cout << "Masukkan Angka kedua: ";
    std::cin >> num2;
    int result = pembagianRekursif(num1, num2);
    std::cout << "Hasil pembagian rekursif: " << result << std::endl;
    return 0;
}

