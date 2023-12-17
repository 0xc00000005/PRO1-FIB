#include <iostream>
using namespace std;
int main(){
    int n2,n1,n,a,i;
    n=0;
    n2=900000;
    n1=899999;
    i=n;
    a=0;
    while (cin >> n){
    while(n>0){
        i=n%10;
        n=n/10;
       // cout << n << i << endl;
       //cout << n2 << 'a' << ' ' << n1 << 'b' << ' ';
        if (n2 < n1 and n1 > i) a++;
        n2=n1;
        n1=i;
    }
    cout << a << endl;
    a=0;
    n2=900000;
    n1=899999;
}
}