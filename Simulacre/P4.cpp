#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,m,side;
    int dalt=0;
    int cdalt,cside;
    while (cin >> n >> m >> side){
        dalt=((m*side)*2)-1;
        cdalt=dalt;
        cside=side;
        while (n>0){
        cout << string(dalt, '#') << endl;
        while (cside>0){
        while (cdalt>1){
            cout << '#' << string(side, ' ');
            cdalt=cdalt-side-1;
        }
        cdalt=dalt;
        cout << '#' << endl;
        cside--;
        }
        cside=side;
        --n;
    }
    cout << string(dalt, '#') << endl;
    cout << endl;
    }
}

