#include <iostream>
using namespace std;

int main(){
    int n,c;
    int a = 0;
    cin >> n;
    c=n;
    int i=1;
    while (n!=0){
        if (i==1 || i==3 || i==5 || i==7 || i==9){
            a=a+(n%10);
        }
        n=n/10;
        ++i;
    }
   // cout << a << endl;
    if (a%2==0){
        cout << c << " ES TXATXI" << endl;
    }
    else {
        cout << c << " NO ES TXATXI" << endl;
    }
}