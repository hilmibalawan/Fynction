#include <iostream>
using namespace std;
int LuasPersegi(int Sisi){
    int luas= Sisi *= Sisi;
    cout << luas << endl;
    return Sisi;
}

int main() {
    
    LuasPersegi(4);
	return 0;
}		

    