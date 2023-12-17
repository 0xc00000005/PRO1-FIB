#include <iostream>
using namespace std;
int main(){
    char lletra;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int i;
    for (i=0;cin>>lletra;++i){
        if(lletra=='a') ++a;
        if(lletra=='b') ++b;
        if(lletra=='c') ++c;
        if(lletra=='d') ++d;
        if (a>1){
            cout << "a " << i << endl; 
            break;
        }
        if (b>1){
            cout << "b " << i << endl; 
            break;
        }
        if (c>1){
            cout << "c " << i << endl; 
            break;
        }
        if (d>1){
            cout << "d " << i << endl; 
            break;
        }
    }
    return 0;
}