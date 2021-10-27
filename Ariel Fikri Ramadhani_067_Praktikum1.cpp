#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


int main (void)
{
    //Data Declaration

    char name [100];
    float jam, menit, detik, nokom;

    //Input
    cout<<"------------------------------------------"<<endl;
    cout<<"-------      Billing Warnet        -------"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Nama :"; cin>>name;
    cout<<"Nomor Komputer :"; cin>>nokom;

    cout<<"\tLama Pemakaian"<<endl;
    cout<<"======================================="<<endl;
    cout<<"Lama Jam Rental :"; cin>>jam;
    cout<<"Lama Menit Rental :"; cin>>menit;
    cout<<"Lama Detik Rental :"; cin>>detik;

    //Operation
    cout<<"	Hasil Tarif";
    cout<<"======================================="<<endl;
	cout<<"\n";
	cout<<"Nama = "<<name;
	cout<<"\nNomor Komputer = "<<nokom;
	cout<<"\nTotal Tarif = " <<(jam*5000)+(menit*5000/60)+(detik*5000/3600)<<endl;

    return 0;
}