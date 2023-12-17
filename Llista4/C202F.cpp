#include <iostream>
using namespace std;
int main(){
    int n,a,s,e,g,uno,dos,tres;
    g=0;
    s=0;
    cin >> n;
    a=n;
    tres=a%10;
    a=a/10;
    dos=a%10;
    a=a/10;
    uno=a%10;
    cout << "nombres que acaben igual que " << n << ':' << endl;
    while (cin >> s){
        e=s/10;
        if (s%10 ==tres and (s/10)%10==dos and (e/10)%10==uno){
            cout << s << endl;
            ++g;
        }
    }    
    cout << "total: " << g << endl;
}

