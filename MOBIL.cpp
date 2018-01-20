#include <iostream>
#include <string>
using namespace std;

class MOBIL{
	public:
	void warna(string nama);
	string tipe,nama;
	
};
int main(){
	
	MOBIL AVANZA,DAIHATSU,SUZUKI;
	
	AVANZA.nama	   =" MOBIL AVANZA ";
	AVANZA.tipe    =" AVANZA SERI E ";
	DAIHATSU.nama  =" MOBIL TOYOTA ";
	DAIHATSU.tipe  =" DAIHATSU AYLA ";
	SUZUKI.nama    =" MOBIL SUZUKI ";
	SUZUKI.tipe	   =" SUZUKI ERTIGA ";
	
		cout<< (AVANZA.nama);
		cout<< (AVANZA.tipe);
	AVANZA.warna("Hitam");
	
		cout << (DAIHATSU.nama);
		cout << (DAIHATSU.tipe);
	DAIHATSU.warna("Putih");
	
	
		cout<< (SUZUKI.nama);
		cout<< (SUZUKI.tipe);
	SUZUKI.warna("Silver");
}
	void MOBIL::warna(string nama){
		cout<<nama<<endl;
	
}
