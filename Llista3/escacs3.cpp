#include <iostream>
using namespace std;
int main(){
    int f,c,s,i,k = 0;
    cin >> f >> c;
    int a = f*c;
    char num;
    //cout << a << endl;
    //cout << endl;
    int odd=2;
       for(k=0;k<f;++k){
        for (i=0;i<c;++i){
        cin >> num;
        if (odd%2==0){
        //cout << num << 'A' << endl;
        s=s+int(num-48);
        ++odd;
       }
       else{
        ++odd;
       }
       //cout << "  " << s << "  " << odd << endl;
       a=a-1;
        }
        i=0;
        ++odd;
        }
    cout << s << endl;
}