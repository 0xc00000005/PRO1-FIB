#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(10);
    double n,m,s,x,i,o;
    s,x=0;
    while(cin >> n >> m){
        for(i=1;i<=n;++i){
            s=s+(1/i);
        }
        for(o=1;o<=m;++o){
            x=x+(1/o);
        }
        cout << (s-x) << endl;
        s=0;
        x=0;


    }

return 0;
}
