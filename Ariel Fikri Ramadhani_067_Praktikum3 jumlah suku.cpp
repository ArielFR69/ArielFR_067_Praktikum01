#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    
    int deret,a;
    char obj;
    
	cout<<"============================================="<<endl;
	cout<<"            Jumlah Suku 6 Pertama            "<<endl;
	cout<<"============================================="<<endl;
	
	
	
	cout<<"Jumlah Deret Yang Di Inginkan: ";cin>>deret<<endl;
	
	cout<<"--------------------------------------------"<<endl;
	for(a=1; a<=deret;a++) {

		cout<<a*a*a <<" ";
	}
	cout<<endl;

	cout << "Apakah anda ingin menghitung lagi? [Y/N] ="; cin>>obj;
    if (obj== 'Y' || obj== 'y'){
        goto start;
    }
    else if (obj== 'N' || obj== 'n'){
        exit( 0 );
    }
}