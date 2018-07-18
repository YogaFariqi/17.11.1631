#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <Windows.h>
#include <vector>
using namespace std;

class pakaian{
	public:
		char ukuran[50];
		char model[50];
		char warna[50];
		string jmlh;
};

vector <pakaian> node;

void intro();
void mainMenu();
void kaos();
void kemeja();
void Exit();
int harga;

void intro()
{
	system("cls");
	cout <<"============WELCOME TO============\n";
	cout <<"\t  GROSIR PAKAIAN\n";
	cout <<"==================================\n";
	for(int i = 0; i < 34; ++i)
	{
		cout << char(219);
		Sleep(80);
	}
	cout << "\n\t";
		
}

void mainMenu(){
    system("cls");
    int choice;
    cout << "==========================" << endl;
	cout << "Grosir Pakaian" << endl;
	cout << "==========================" << endl;
    cout << "1. Kaos" << endl;
    cout << "2. Kemeja" << endl;
	cout << "3. Exit" << endl;
    cout << "==========================" << endl;
    cout << "pilihan: "; cin >> choice;
    switch(choice){
        case 1:
            kaos();
            break;
        case 2:
            kemeja();
            break;
		case 3:
            Exit();
            break;
        default:
        mainMenu();
        break;
    }
}

void kaos(){
	int jmlh, tot;
	char b;
	string ukuran;
	string model;
	string warna;
	harga = 30000;
	cout<<"1. Ukuran\t: "; cin>>ukuran;
	cout<<"2. Model\t: "; cin>>model;
	cout<<"3. Warna\t: "; cin>>warna;
	cout<<"5. Jumlah\t: "; cin>>jmlh;
	cout<<"4. Harga\t: Rp."<<harga<<endl;
	cout<<"6. Total Pembayaran: Rp."<<harga*jmlh<<endl;
	cout << "\nTekan B untuk membeli lagi" << endl; cin >> b;
    if(b == 'b' || b == 'B')
	{
        mainMenu();
    }
}

void kemeja(){
	int jmlh, tot;
	char b;
	string ukuran;
	string model;
	string warna;
	harga = 65000;
	cout<<"1. Ukuran\t: "; cin>>ukuran;
	cout<<"2. Model\t: "; cin>>model;
	cout<<"3. Warna\t: "; cin>>warna;
	cout<<"5. Jumlah\t: "; cin>>jmlh;
	cout<<"4. Harga\t: Rp."<<harga<<endl;
	cout<<"6. Total Pembayaran\t: Rp."<<harga*jmlh<<endl;
	cout << "\nTekan B untuk membeli lagi" << endl; cin >> b;
    if(b == 'b' || b == 'B')
	{
        mainMenu();
    }
}

void Exit(){
    system("cls");
	cout<<"\nTERIMA KASIH\n";
}

int main() {
	intro();
    mainMenu();
    return 0;
}
