#include <iostream>
#include <string>
using namespace std;

class uang{
	public:
		string warna,nmpahlawan;
};

int main(){
	uang duarb,limarb;
	
	duarb.warna = "abu-abu";
	duarb.nmpahlawan = "MOHAMMAD HOESNI THAMRIN";
	
	limarb.warna = "coklat";
	limarb.nmpahlawan = "Dr.K.H.IDHAM CHALID";
	
	cout << "Ciri-ciri uang Rp.2000" <<endl;
	cout << "warna uangnya adalah = "<<(duarb.warna)<<endl;
	cout << "nama pahlawannya adalah = "<<(duarb.nmpahlawan)<<endl;
	
	cout <<endl;
	
	cout << "Ciri-ciri uang Rp.5000" <<endl;
	cout << "warna uangnya adalah = "<<(limarb.warna)<<endl;
	cout << "nama pahlawannya adalah = "<<(limarb.nmpahlawan)<<endl;
}
