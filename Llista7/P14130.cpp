#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n;
    int i;
    cin >> n;
    vector<int> x(n);
    for (i=0; i<n; ++i){
        cin >> x[i];
    }
    int a=0;
    for(i=0; i<n; ++i){
        if (x[i]==x[n-1]) ++a;
    }
    cout << a-1 << endl;
}