#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string ambilpilihan(int x){
	if (x == 1){
		return "Batu";
	}else if(x == 2){
		return "Gunting";
	}else if(x == 3){
		return "Kertas";
	}
}

int main(){
	int pemain, komputer;
	char bermainlagi;
	
	srand(time(0));
	do{
	
	system("cls");
	
		int i = 1;
		while(int i = 1){
		
		cout << "\t SELAMAT DATANG DI PERMAINAN SUIT!" << endl;
		cout << " \n";
		cout << " \n";
		cout << " \n";
		cout << "Silahkan pilih apa yang lo mau pake: " << endl;
		cout << "1. Batu \n2. Gunting\n3. Kertas" << endl;
		cout << "pilihan lo (ketik angkanya aja): ";
		cin >> pemain;
		if (pemain == 1 || pemain == 2 || pemain == 3){
			break;
		}else{
			cout << "gabisa bro, baca dong pilihannya :( \n\n\n" << endl;
		}
	}
	komputer = rand() % 3 + 1;
	
	cout << "\npilihan lo adalah " << ambilpilihan(pemain) << endl;
	cout << "pilihan si komputer " << ambilpilihan(komputer) << endl << endl;
	
	if(pemain == komputer){
		cout << "hasil kalian seri \n\n";
	}else if ((pemain == 1 && komputer == 2) || (pemain == 2 && komputer == 1) || (pemain == 3 && komputer == 1)){
		cout << "ciee menang \n\n";
	}else{
		cout << "masa sama bot aja kalah, cuih\n\n";
	}
	
	cout << "Mau main lagi gak? [y/n] \n \n";
	cin >> bermainlagi;
	}while (bermainlagi == 'y' || bermainlagi == 'Y');
}
