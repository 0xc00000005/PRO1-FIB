#include <iostream>
using namespace std;
int main(){
    char frase;
    int as;
    while (cin >> frase){
        if (frase=='.'){
            break;
        }
        else if (frase=='a'){
            ++as;
        }
    }
    cout << as << endl;
    return 0;
}