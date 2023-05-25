#include <iostream>

int pangkatRekursif(int basis, int eksponen) {
  if (eksponen == 0) {
    return 1;
  } else {
    return basis * pangkatRekursif(basis, eksponen - 1);
  }
}
int main() {
    double num1;
    int num2;
    std::cout << "Masukkan Angka : ";
    std::cin >> num1;
    std::cout << "Masukkan pangkat : ";
    std::cin >> num2;
    double result = pangkatRekursif(num1, num2);
    std::cout << "Hasil perpangkatan rekursif: " << result << std::endl;
    return 0;
}
