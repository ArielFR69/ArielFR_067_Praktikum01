#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int a, s, c, jmlh, i, n;
	
	cout<<" ==   Penghitungan Jumlah Deret Bilangan   =="<<endl;
    cout<<" =========================================== "<<endl;
    cout<<" Bilangan awal\t: "; cin>>a;
    cout<<" Selisih\t: "; cin>>s;
    cout<<" Deret ke-n\t: "; cin>>n;
    cout<<"============================================"<<endl;




    
    cout<<" Deret ke-"<<n<<" : ";
    cout<<a<<",";
    
    jmlh=jmlh+a; 
    for(i=0; i<n-1; i++){
             c=a+s;
             a=c;
             cout<<c<<",";
             jmlh=jmlh+c;
    }
     
    cout<<"\n Jumlah deret ke-"<<n<<" = "<<jmlh; 
     
    getch();
}