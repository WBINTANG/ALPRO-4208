#include <iostream>

int perkalianRekursif(int a, int b) {
  if (b == 0) {
     return 0;
  } else {
    return a + perkalianRekursif(a, b - 1);
  }
}

int main() {
    int num1, num2;
    std::cout << "Masukkan angka pertama : ";
    std::cin >> num1;
    std::cout << "Masukkan angka kedua : ";
    std::cin >> num2;
    int result = perkalianRekursif(num1, num2);
    std::cout << "Hasil perkalian rekursif: " << result << std::endl;
    return 0;
}

