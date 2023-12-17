#include <iostream>
using namespace std;
int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    double n,a,nq,sq,i;
    cin >> n;
    for (i=0;i<n;++i){
        cin >> a;
        sq=sq+(a*a);
        nq=nq+a;
    }
    double csq,cnq;
    csq=(1/(n-1))*(sq);
    cnq=(1/(n*(n-1)))*(nq*nq);
    cout << (csq-cnq) << endl;
}