#include <iostream>
// untuk objek exception yang akan digunakan
#include <exception>
// untuk objek array yang akan digunakan
#include <array>
using namespace std;

int main() {
	cout << "awal program" << endl; // penanda 1.....
	try {
		array<int, 3> data = { 1,2,3 };
		//pesan array integer 3 element
		cout << data.at(5) << endl;
		// memanggil array element 5
	}
	catch (exception& e) {
		// penangkap menggunakan objek exception
		cout << e.what() << endl;
		// akan dieksekusi karena array data hanya memiliki 3 elemen
	}
	cout << "Baris program yang terakhir " << endl;
	// penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan

	return 0;
}