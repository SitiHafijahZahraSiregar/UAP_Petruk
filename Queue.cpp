
#include <iostream>
#include <queue>
#include <conio.h>
using namespace std;


void tampilan(queue<int>noAntrian){
   while(!noAntrian.empty()){
	cout<<"No Antrian :"<<noAntrian.front()<<endl;
	noAntrian.pop();
	}
	cout<<endl;
}

int main (){
	int n,angka,pilih;
	queue<int>bioskop;

	do{
 	system("cls");
   	cout<<"|===========================|\n";
   	cout<<"| Antrian Tiket bioskop     |\n";
   	cout<<"|===========================|\n";
   	cout<<"|1. Tambah Antrian          |"<<endl;
   	cout<<"|2. Panggil Antrian         |"<<endl;
   	cout<<"|3. Daftar Antrian          |"<<endl;
   	cout<<"|4. Keluar                  |"<<endl;
   	cout<<"|===========================|"<<endl;
   	cout<<"Pilih : ";
   	cin>>pilih;
		
		switch (pilih){
		case 1 :
			cout<<"Jumlah Antrian :";
			cin>>n;
			for(int i=0 ; i<n ;i++){
				cout<<"Nomor Antrian ke - "<<i+1<<" ";
				cin>>angka;
				bioskop.push(angka);
			}
			break;

return 0;
}
