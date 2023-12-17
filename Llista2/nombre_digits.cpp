#include <iostream>
using namespace std;

int main(){
    int n,i,ni;
    cin >> n;
    ni = n;
    if (n==0){
        cout << "El nombre de digits de 0 es 1." << endl;
        return 0;
    }
    for (i=0; n!=0; ++i){
        n=n/10;
    }
    cout << "El nombre de digits de " << ni << " es " << i << '.' << endl;
}