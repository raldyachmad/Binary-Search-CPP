#include <iostream>
#include <stdlib.h>
using namespace std;

int maksData, temp[50], data[50], cari;

int main(){
	
	//Awal input
	cout <<"Masukan MaksData : "; 
	cin >> maksData;
	
	for (int a=0; a<maksData; a++){
		cout <<"Data - "<<a+1<<" = ";
		cin >> data[a];
	}
	//Akhir input
	
	//pengurutan data dgn Bubble Sort
	for (int a=0; a<maksData; a++){
		for(int b=0; b<maksData-1; b++){
			if (data[b]>data[b+1]){
				temp [b] = data[b];
			   data[b] = data[b+1];
		   	  data[b+1]=temp[b];
			}
		}
	}
	
	//output data
	cout <<endl<<"HASIL OUTPUT ";
	for (int a=0; a<maksData; a++){
		cout <<" "<<data[a];
	}
	
	cout <<endl<<endl;
	system("pause > null | echo Tekan Sembarang Tombol . .. ...");
	cout <<endl;
	cout <<"Cari Data = "; cin >> cari;
	
	//cari dengan BINARY SEARCH
	int low, mid, high;
	bool ketemu;
	
	low = 0;
	high= maksData-1;
	
	do{
		mid=(low+high)/2;
		if (data[mid]==cari){
			ketemu=true; //Jika data ditemukan
			break;
		}else if(cari > data[mid]){
			low = mid + 1;
		}else{
			high = mid - 1;	
		}
	}while(low<=high);
	
	cout <<endl;
	if (ketemu==true){
		cout <<"Data Ketemu"<<endl;
	}else {
		cout <<"Data Tidak Ketemu"<<endl;
	}
		
system ("pause > null");
return 0;
}
