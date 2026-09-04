#include<iostream>
using namespace std;
int ceksuhu(float C){
    float F = C * 1.8 + 32;
    cout << F << endl;
    return F;
}
int main(){
    ceksuhu(4);
}