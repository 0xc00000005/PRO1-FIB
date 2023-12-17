#include <iostream>
using namespace std;
int main(){
    char l='l';
    int s=0;
    int m=0;
    int h=0;
    bool asinb=false;
    bool dsinb=false;
    while (cin >> l){
        // Contar c.
        if (l=='a') asinb=true;
        if (l=='b') asinb=false;
        if (l=='c' && asinb) s++;
        // Contar d.
        if (l=='d'){
            dsinb=true;
            ++h;
        } 
        else if (l=='b'){
            dsinb=false;
            h=0;
        }
        else if (l=='a' && dsinb){
            m=m+h;
            h=0;
        }
    }
    cout << s << ' ' << m << endl;
}