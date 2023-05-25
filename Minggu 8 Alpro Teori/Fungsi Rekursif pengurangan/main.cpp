#include <iostream>

int penguranganRekursif(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return penguranganRekursif(a - 1, b - 1);
  }
}

int main() {
    int num1, num2;
    std::cout << "Masukkan angka pertama : ";
    std::cin >> num1;
    std::cout << "Masukkan angka kedua : ";
    std::cin >> num2;
    int result = penguranganRekursif(num1, num2);
    std::cout << "Hasil pengurangan rekursif: " << result << std::endl;
    return 0;
}

