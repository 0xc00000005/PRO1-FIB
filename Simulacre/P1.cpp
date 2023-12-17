#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    bool promig=false;
    cin >> a >> b >> c;
   // cout << ((a+c)/2);
    if (((a+b)/2)==c){
       // cout << 'a';
        promig=true;
    }
    else if (((a+c)/2)==b){
        promig=true;
      //  cout << 'b';
    }
    else if (((c+b)/2)==a){
        promig=true;
     //   cout << 'c';
    }
    if (promig) cout << "YES" << endl;
    else cout << "NO" << endl;
}