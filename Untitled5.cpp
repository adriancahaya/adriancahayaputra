#include <iostream>
#include <string>
using namespace std;

class sendal{
	public:
		void bahan(string karet);
		string merk;
		double harga;
};
int main () {
	sendal karet;
	
	sendal.merk ="nipon";
	sendal.harga = 10000;
	
	cout<<"merk yang dipakai "<< (sendal.merk)<<endl;
	cout<<"Harga modal nya "<< (sendal.harga)<<endl;
	
	sendal.bahan("terbuat dari karet yang berkualitas dijamin tahan lama");
}
