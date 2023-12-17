#include <iostream>
using namespace std;

int main(){
    int n,s,i;
    s=0;
    cin >> n;
    for (i=0; i<(n+1); ++i){
        s = s + (i*i);
    }
    cout << s << endl;
}