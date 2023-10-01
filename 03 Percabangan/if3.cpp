#include <iostream>

using namespace std;

int main() {
    int angka ;
    cin >> angka ;
    
        if (angka <= 9) {
    cout << "Satuan" ;
    } else if (angka >= 10 && angka <= 99) {
    cout << "Puluhan";
    } else if ( angka >= 100 && angka <= 999) {
    cout << "Ratusan";
    } else {
cout << "Tidak Tahu";
} 

    
    
}