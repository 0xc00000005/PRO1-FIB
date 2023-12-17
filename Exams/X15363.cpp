#include <iostream>
#include <string>
using namespace std;

void romboprint(int n, int a){
    if (n==1){
        cout << string(a-1, ' ') << '*' << endl;
    } 
    else{
    romboprint(n-1,a);
    int i=2;
    while(i<=n){
    cout << string(a-i, ' ') << string(((2*i)-1), '*') << endl;
    ++i;
    }
    i=i-2;
    while(i>=2){
    cout << string(a-i, ' ') << string(((2*i)-1), '*') << endl;
    --i;
    }
    romboprint(n-1,a);
    }
}

int main(){
    int n;
    while (cin >> n){
        int a=n;
        romboprint(n,a);
        cout << endl;
}
}