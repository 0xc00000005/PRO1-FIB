#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin >> n;
    b=0;
    while (cin >> a){
        if (a%n==0){
            ++b;
        }
    }
    cout << b << endl;
}