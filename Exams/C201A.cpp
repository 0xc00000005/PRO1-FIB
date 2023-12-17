#include <iostream>
using namespace std;

int main(){
    int n,c;
    int a = 0;
    cin >> n;
    c=n;
    while (n!=0){
        if (n%10==1 || n%10==3 || n%10==5 || n%10==7 || n%10==9){
            a=a+(n%10);
        }
        n=n/10;
    }
    if (a%2==0){
        cout << c << "ES TXATXI" << endl;
    }
    else {
        cout << c << "NO ES TXATXI" << endl;
    }
}