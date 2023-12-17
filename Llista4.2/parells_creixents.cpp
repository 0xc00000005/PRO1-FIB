#include <iostream>
using namespace std;
int main(){
    int n,i,j,ja,o;
    ja=342342432;
    o=0;
    cin >> n;
    for (i=0;i<n;++i){
        while (cin >> j){
            if(j==0){
                break;
            }
            if(ja<j){
                ++o;
            }
            ja=j;
        }
        cout << o << endl;
        o=0;
        ja=3242543;
    }
    return 0;
}