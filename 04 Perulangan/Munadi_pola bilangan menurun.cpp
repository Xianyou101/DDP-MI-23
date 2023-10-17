#include <iostream>
using namespace std;

int main(){
    int N, D, X;
    cin >> N >> D >> X;
    
    for (int a =N; a >= D; a += X){
        cout << a << " ";    
    }
    
return 0;   
    
}