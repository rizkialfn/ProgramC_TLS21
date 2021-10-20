//Program Kalkulator Sederhana
//Rizki Alfiansyah, Teknik Elektro 2021
#include<iostream>

using namespace std;

int main(){
    
    int bil1,bil2,pil;
    float hasil;
    
    cout<<"Pilihlah menu di bawah ini :\n";
    cout<<"[1] Penjumlahan\n";
    cout<<"[2] Pengurangan\n";
    cout<<"[3] Perkalian\n";
    cout<<"[4] Pembagian\n";
    cout<<"Masukkan pilihan anda : ";
    cin>>pil;

    switch (pil){
    case 1:
        cout<<"Input bil 1 = ";cin>>bil1;
        cout<<"Input bil 2 = ";cin>>bil2;
        hasil=bil1+bil2;
        cout<<"Hasil penjumlahannya = "<<hasil<<endl<<endl;
        break;
    case 2:
        cout<<"Input bil 1 = ";cin>>bil1;
        cout<<"Input bil 2 = ";cin>>bil2;
        hasil=bil1-bil2;
        cout<<"Hasil pengurangannya = "<<hasil<<endl<<endl;
        break;
    case 3:
        cout<<"Input bil 1 = ";cin>>bil1;
        cout<<"Input bil 2 = ";cin>>bil2;
        hasil=bil1*bil2;
        cout<<"Hasil perkaliannya = "<<hasil<<endl<<endl;
        break;
    case 4:
        cout<<"Input bil 1=";cin>>bil2;
        cout<<"Input bil 2=";cin>>bil2;
        hasil=bil1/bil2;
        cout<<"Hasil pembagianya = "<<hasil<<endl<<endl;
        break;
    default :
        cout<<"Maaf blm terdaftar";
    }
    
return 0;
}