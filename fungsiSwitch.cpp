#include<iostream>
using namespace std;

int bilangan1, bilangan2;
void inputData(){
    cout << "Masukkan bilangan pertama:" ;
    cin >> bilangan1;
    cout << "Masukan bilangan kedua:" ;
    cin >> bilangan2;
}

int penjumlahan (int a, int b){
    return a + b
}

int pengurangan (int a, int b){
    return  a - b;
}

int perkalian (int a, int b){
    return a * b;
}
float pembagian (int a, int b){
    return a / b;
}
int main (){
    
int pilihan;

do{
    cout << "kalkulator sederhana" << endl;
    cout << "=====================" << endl;
    cout << "pemjumlahan" << endl;
    cout << "pengurangan" << endl;
    cout << "perkalian" << endl;
    cout << "pembagian" << endl;
    cout << "keluar" << endl;
    cout << "=====================" << endl;
    cout << "masukan menu pilihan:" ;
    cin >> pilihan;

} 

}