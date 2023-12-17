#include <iostream>
#include <string>
using namespace std;
int main(){
    int NUM1, NUM2, NUM3=0;
    char OPERADOR;
    string COMPARADOR;
    while (cin >> NUM1 >> OPERADOR >> NUM2 >> COMPARADOR >> NUM3){
        int NUM12;
        NUM12=0;
        if(OPERADOR=='+'){
            NUM12=(NUM1+NUM2);
        }
        else if (OPERADOR=='-'){
            NUM12=(NUM1-NUM2);
        }
        else if (OPERADOR=='*'){
            NUM12=(NUM1*NUM2);
        }
        else if (OPERADOR=='/'){
            NUM12=(NUM1/NUM2);
        }

        if (COMPARADOR=="<"){
            if(NUM12<NUM3){
                cout << "true" << endl;
            }
            else cout << "false" << endl;
        }
        else if (COMPARADOR==">"){
            if(NUM12>NUM3){
                cout << "true" << endl;
            }
            else cout << "false" << endl;
        }
        else if (COMPARADOR=="<="){
            if(NUM12<=NUM3){
                cout << "true" << endl;
            }
            else cout << "false" << endl;
        }
        else if (COMPARADOR==">="){
            if(NUM12>=NUM3){
                cout << "true" << endl;
            }
            else cout << "false" << endl;
        }
        else if (COMPARADOR=="=="){
            if(NUM12==NUM3){
                cout << "true" << endl;
            }
            else cout << "false" << endl;
        }
        else if (COMPARADOR=="!="){
            if(NUM12!=NUM3){
                cout << "true" << endl;
            }
            else cout << "false" << endl;
        }
    }
}