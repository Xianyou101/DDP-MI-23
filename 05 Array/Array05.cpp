#include <iostream>
using namespace std;


int main() {
    int velue1, velue2;
    cin >> velue1 >> velue2;
    
    int matrix[velue1][velue2];
    
    for (int i=0; i<velue1; i++) {
        for (int j=0; j<velue2; j++) {
            cin >> matrix[i][j];
       }    
     }
    
    for (int i=velue1-1; i>=0; i--) {
        for (int j=velue2-1; j>=0; j--) {
            cout << matrix[i][j] << " ";
            
        }
       cout << endl;
    }
    
    return 0;
            
}
