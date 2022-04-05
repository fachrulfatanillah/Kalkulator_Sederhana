#include <iostream>
using namespace std;

int user(){
    float a,b,hasil;
    char aritmatika;

    //Memasukkan input dari user
    cout <<"Masukkan nilai pertama : ";
    cin >>a;
    cout <<"Pilih Operator +,-,x,/ : ";
    cin >>aritmatika;
    cout <<"Masukkan nilai kedua   : ";
    cin >> b;

    cout <<"Hasil Perhitungan ";
    cout << a <<" "<< aritmatika <<" "<< b;

    //Kondisi
    switch(aritmatika){
    case '+':
        hasil = a+b;
    break;
    case '-':
        hasil = a-b;
    break;
    case 'x':
        hasil = a*b;
    break;
    case '/':
       hasil = a/b;
    break;
    default:
        cout << "Operator salah";
    }

    cout << " = " << hasil << endl;
    cin.get();
}

int main(){
    cout <<"Selamat datang di program kalkulator\n\n";
    string inputUser;
    inputUser = "Y";
    while (inputUser == "Y"){
        user();
        cout<<endl;
        cout << "Lagi(Y/N): "; cin >> inputUser;
        cout<<endl;
    }
    cout << "Anda Telah Keluar Dari Program Kalkulator" <<endl;
    return 0;
}
