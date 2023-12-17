#include <iostream>
using namespace std;
int main(){
    int i,b,c,n;
    c=0;
    cin >> i;
    while (cin>>n){
        c++;
        if(c==i){
            cout << "A la posicio " << i << " hi ha un " << n << '.' << endl;
            return 0;
        }
    }
    cout << "Posicio incorrecta." << endl;
}