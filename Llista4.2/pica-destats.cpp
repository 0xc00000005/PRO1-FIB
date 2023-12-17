#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,na,nb;
    na=456789;

    while (cin >> n){
        if (n > 3143){
            if (na < n){
                cin >> nb;
                if (nb == 0){
                    cout << "NO" << endl;
                    return 0;
                }
                else if (nb < n){
                    cout << "SI" << endl;
                    return 0;
                }
            }
        }
        na=n;
        if (n==0){
            cout << "NO" << endl;
            return 0;
        }
    }
}