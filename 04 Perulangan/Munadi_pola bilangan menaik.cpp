#include <iostream>
using namespace std;

int main(){
    int N, D, Z;
    cin >> N >> D >> Z;
    
    for (int b =N; b <= D; b += Z){
        cout << b << " ";    
    }
    
return 0;   
    
}