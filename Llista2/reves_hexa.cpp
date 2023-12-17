#include <iostream>
using namespace std;

int main() {
    int n,a;
    cin >> n;
    a=n;
    if (n==0) {cout << 0 << endl; 
    return 0;}
    while (a>0){
        if (a%16==15){
            cout << 'F';
        }
        else if (a%16==14){
            cout << 'E';
        }
        else if (a%16==13){
            cout << 'D';
        }
        else if (a%16==12){
            cout << 'C';
        }
        else if (a%16==11){
            cout << 'B';
        }
        else if (a%16==10){
            cout << 'A';
        }
        else{
            cout << (a%16);
        }
        a=a/16;
    }
    cout << endl;
}