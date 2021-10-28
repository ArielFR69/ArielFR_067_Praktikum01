
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int ni,a,h;
	cout<< "Masukkan Segitiga Angka : "; cin>>ni;
	cout<<endl;
	
	for (a=1;a<=ni;a++) {
		for (h=1; h<=a;h++) {
			cout<<h;
		}
		cout<<endl;
	}
	for (a=ni-1;a>=1;a--) {
		for(h=1;h<=a;h++) {
			cout<<h;
		}
		cout<<endl;
	}
	
	getch();
}