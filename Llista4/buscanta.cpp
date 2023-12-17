#include <iostream>
using namespace std;
int main(){
    char frase;
    bool a = false;
    while (cin >> frase){
        if (frase=='.'){
            break;
        }
        else if (frase=='a'){
            a=1;
        }
    }
    if (a){
        cout << "si" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}