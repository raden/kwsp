#include <iostream>
using namespace std;

int main(){

int tahun;
float asas, untung, untung_tahun, jumlah_untung, untung_berompok;

cout<<"Masukkan jumlah asas pelaburan"<<endl;
cin>>asas;

cout<<"Masukkan jumlah tahun pelaburan"<<endl;
cin>>tahun;

cout<<"Masukkan kadar untung setahun"<<endl;
cin>>untung;

untung_berompok=0;

for (int i=0;i<tahun;i++)
{
	untung_tahun=((untung_berompok+asas)*(untung/100));
	untung_berompok+=untung_tahun;
	jumlah_untung=asas+untung_berompok;
	cout<<"Untung tahun "<<i+1<<" ialah RM "<<untung_tahun<<endl;
}

cout<<endl;
cout<<"Jumlah keuntungan ialah RM "<<untung_berompok<<endl;

cout<<endl;
cout<<"Jumlah baru dana bercampur untung selama "<<tahun<<" tahun ialah RM "<<jumlah_untung<<endl;
}


