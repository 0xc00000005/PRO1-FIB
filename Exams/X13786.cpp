#include <iostream>
#include <string>
using namespace std;
int main(){
    int m;
    string f1,f2,f3,frase,f5,f6,f7,f9,f10;
    while(cin >> f1 >> f2 >> f3 >> frase >> f5 >> f6 >> f7 >> m >> f9 >> f10){
        if (f1.empty()){
            break;
        }
        else {
        int n;
        n=m/10;
        cout << frase << ", you look younger. I thought you were " << (m-n) << " years old." << endl;
        }
    }
    return 0;
}