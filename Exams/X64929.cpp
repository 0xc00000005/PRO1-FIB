#include <iostream>
using namespace std;
int main(){
    char lletra, ll2, ll1;
    ll1='a';
    ll2='a';
    int f,t;
    f=0;
    t=0;
    while (cin>>lletra){
        if (ll2==':' && ll1=='-' && lletra==')'){
            f++;

        }
        else if (ll2==')' && ll1=='-' && lletra==':'){
            t++;


        }
        else if (ll2=='(' && ll1=='-' && lletra==':'){
            f++;


        }
        else if (ll2==':' && ll1=='-' && lletra=='(') {
            t++;
    

        }
        ll2=ll1;
        ll1=lletra;

    }
    cout << f << ' ' << t << endl;
    return 0;
}   