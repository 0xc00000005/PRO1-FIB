#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n;
    for (i=1; i<(n+1); ++i){
        cout << n << " x " << i << " = " << n*i << endl;    
    }
}