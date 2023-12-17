#include <iostream>
using namespace std;

int main(){
    int n,d,t,a;
    int i=0;
    cin >> d >> n >> t;
    while (t!=0){
        cin >> a;
        n=n+a-d;
        if (n>0){
            ++i;
        }
        else {
            break;
        }
        --t;
    }
    cout << i << endl;
}