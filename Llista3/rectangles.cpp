#include <iostream>
using namespace std;
int main(){
    int m,n,i,k,c;
    c=9;
    bool pendl = false;
    while (cin >> n >> m){
        if (pendl) cout << endl;
        c=9;
        for (i=0;i<n;++i){
            for (k=0;k<m;++k){
                if (c==0){
                    cout << c;
                    c=9;
                }
                else{
                cout << c;
                --c;
                }
            }
            cout << endl;
        }

    pendl = true;
    }
    return 0;
}