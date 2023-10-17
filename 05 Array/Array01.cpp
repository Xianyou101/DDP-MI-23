#include <iostream> 
using namespace std;

int main(){

    int a;
    cin >> a;
    getchar();

    string arr[a];

    for (int n = 0; n <a; n++) {
        getline(cin, arr[n]);
    }

    for (int n = a -1; n >= 0; n--){
        cout << arr[n] << endl;
    }
 return 0;

}