#include<iostream>
using namespace std;
int cekganjilgenap(int angka){
    if(angka % 2 == 0){
        cout << "Genap" << endl;
    }
    else{
        cout << "Ganjil" << endl;
    }
    return angka;
}
int main(){
    cekganjilgenap(5);  
}