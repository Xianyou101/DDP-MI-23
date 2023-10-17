#include <iostream> 
using namespace std;

int main(){ 
    
    string bilangan;
        getline(cin,bilangan);
    
    for (int i = 0; i < bilangan.size(); i++){
        cout << bilangan [i] << endl;
     }
return 0;
    
}