#include <iostream>
using namespace std;
int main(){
    int f,c,s;
    s=0;
    cin >> f >> c;
    int a = f*c;
    cout << a << endl;
    //cout << endl;
    while (a>=0){
        int odd=0;
       char num;
       while(cin >> num){
        //cout << odd << " PAR" << endl;
        if (odd%2==0){
        s=s+int(num-48);
        //cout << (num-48) << " NUM" << endl;
        ++odd;
       }
       else{
        ++odd;}
        }
        --a;
    }
    cout << s << endl;
}