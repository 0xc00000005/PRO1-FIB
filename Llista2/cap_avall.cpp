#include <iostream>
using namespace std;

int main() {
    int n1,n2,g,p,i;
    cin >> n1 >> n2;
    if(n1 > n2){
        g = n1;
        p = n2;
    }
    else if (n2 > n1){
        g = n2;
        p = n1;
    }
    else {
        cout << n1 << endl;
        return 0;
    }
    while (g>=p){
        cout << g << endl;
        g = g-1;
    }
}