#include <iostream>

using namespace std;

int main()
{
   //Mendefinisikan array dan variabel yang dibutuhkan
   int arr[5];
   int sum = 0;
   float average = 0.0;

   //Pengguna untuk memasukkan dua bilangan
   int a, b;
   cout << "Masukkan bilangan pertama: ";
   cin >> a;
   cout << "Masukkan bilangan kedua: ";
   cin >> b;

   //Penjumlahan dan pengurangan dua bilangan
   int c = a + b;
   int d = a - b;
   cout << "Hasil penjumlahan: " << c << endl;
   cout << "Hasil pengurangan: " << d << endl;

   //Pengguna untuk memasukkan nilai-nilai dari array
   for(int i = 0; i < 5; i++) {
      cout << "Masukkan nilai ke-" << i+1 << ": ";
      cin >> arr[i];
   }

   //Menghitung total nilai dari array
   for(int i = 0; i < 5; i++) {
      sum += arr[i];
   }
   cout << "Total nilai dari array: " << sum << endl;

   //Menghitung rata-rata dari array
   average = sum / 5.0;
   cout << "Rata-rata dari array: " << average << endl;


   return 0;
}
