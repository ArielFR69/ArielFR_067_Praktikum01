#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
    //Declaration
    string nama;
	char gol;
	int jam, totupah, gajiperjam;
	
    //Input
	cout<<" Penghitungan Gaji Karyawan"<<endl;
	cout<<"================================================================"<<endl;
	cout<<" Nama Karyawan : ";getline(cin,nama);
	cout<<" Golongan [A/B/C/D] : ";cin>>gol;
	cout<<" Jumlah Jam Kerja : ";cin>>jam;

    //OP
	
	switch(gol) {
		case 'A':
			gajiperjam=5000;
			break;
		case 'B':
			gajiperjam=7000;
			break;
		case 'C':
			gajiperjam=8000;
			break;
		case 'D':
			gajiperjam=10000;
			break;
		default:
			gajiperjam=0;
	}
	
	cout<<"\n";
	cout<<"\n\tHasil Perhitungan  ";
	cout<<"================================================================"<<endl;
	cout<<"\nNama	= 	"<<nama;
	
if(jam<=48){
	totupah=gajiperjam*jam;
	cout<<"\nMenerima Gaji	= Rp. "<<totupah<<"/minggu";
}else if(jam>48){
	totupah=gajiperjam*48+(jam-48)*4000;
	cout<<"\nMenerima Gaji	= Rp. "<<totupah<<"/minggu";
}else{
	cout<<"Tidak Menerima Gaji";
}

	return 0;
}
