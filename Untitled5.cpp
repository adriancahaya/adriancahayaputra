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
	
	karet.merk ="nipon";
	karet.harga = 10000;
	
	cout<<"merk yang dipakai "<< (karet.merk)<<endl;
	cout<<"Harga modal nya "<< (karet.harga)<<endl;
	
	karet.bahan("terbuat dari karet yang berkualitas dijamin tahan lama");
}
void sendal::bahan(string karet){
	cout<<"lebih tahan lama dari pada sendal yang lainnya"<<karet<<"harga ekonomis dijamin!"<<endl;
}

