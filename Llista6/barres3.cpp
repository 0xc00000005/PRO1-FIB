#include <iostream>
#include <string>
using namespace std;

void barres(int a){
if (a == 1) cout << '*' << endl;
    else {
        barres(a - 1);
        barres(a - 1);
        for (int i = 0; i < a; ++i) cout << '*';
        cout << endl;
    }
}



int main(){
int a;
cin >> a;
barres(a);
}