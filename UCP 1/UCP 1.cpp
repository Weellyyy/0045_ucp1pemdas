#include <iostream>
using namespace std;

int sensorA, sensorB, sensorC;
string nama;

void input() {
	cout << "Masukan Nama Kota: ";
	cin >> nama;
	cout << "Masukan hasil sensor 1 = ";
	cin >> sensorA;
	cout << "Masukan hasil sensor 2 = ";
	cin >> sensorB;
	cout << "Masukan hasil sensor 3 = ";
	cin >> sensorC;
}

void display() {
	int penjumlahan = sensorA + sensorB + sensorC;
	float pembagian = penjumlahan / 3.0;
	cout << "Nama Kota = " << nama << endl;
	cout << "Hasil kualitas udara dari sensor = " << pembagian << endl;


}

int main() 
{
	input();
	display();
	return 0;
}


//1. -int umur = untuk menyimpan umur
//   -string nama = untuk menyimpan teks nama
//	 -float tinggi badan = untuk menyimpan tinggi badan

//2. a. prosedur -> tidak mengembalikan nilai
//	 void nama_prosedur() {
//   }
//   b. fungsi -> mengembalikan nilai
//   tipe_data nama_fungsi() {
//   return -> nilai yang dikembalikan
//   }

//3. for (kondisi awal ; kondisi akhir ; pengubah kondisi)
//   {
//	 }

//4. jika hanya ada 1 kondisi maka yang digunakan simple if, sedangkan terdapat 2 kondisi maka yang digunakan if else

//5. digunakan untuk mengumpulkan beberapa informaasi agar menjadi 1 informasi
