#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int point;
	float p, t, a, l, k, sm, res;
	
	cout<<"Menu Segitiga Siku-Siku";
	cout<<"\n1. Hitung Panjang Sisi Miring";
	cout<<"\n2. Hitung Luas";
	cout<<"\n3. Hitung Keliling";
	cout<<"\n4. Keluar Program";
	cout<<"\nMasukkan Pilihan = ";
	cin>>point;
	
	cout<<"Masukkan Alas Segitiga = ";
	cin>>a;
	cout<<"Masukkan Tinggi Segitiga = ";
	cin>>t;
	
	sm=sqrt(a*a+t*t);
	l=0.5*a*t;
	k=a+t+sm;
	
	switch(point) {
		case 1:res=sm;
			cout<<"\nPanjang Sisi Miring = "<<sm;
			break;
		case 2:
			cout<<"Panjang l Segitiga = "<<l;
			break;
		case 3:
			cout<<"k Segitiga = "<<k;
			break;
		case 4:
			cout<<"Keluar";
			break;
		default:
		cout<<"Operasi Yang Anda Pilih Tidak Tersedia";	
	}
	
	
	
	
	
	return 0;
}