#include <iostream>
using namespace std;

int main(){
    int numspaces, numrombres;
    int a,b,c,g,z;
    z=0;
    int iz,de;
    int hj;
    while(cin >> numspaces >> numrombres){
    if (numspaces==1){
        for (g=0;g<numrombres;++g){
            cout << " *" << endl << "* *" << endl;
        }
        cout << " *" << endl << endl;
    }
    else{
    for (a=0;a<numrombres;++a){
        int h = 2;
        for (b=0;b<numspaces;++b){
            cout << ' ';
        }
        cout << '*' << endl;
        for (c=(numspaces-1);c!=0;--c){
            cout << ' ';
        }
        cout << "* *" << endl;
        iz=numspaces-2;
        de=1;
        int filas = numspaces-2;
        while (filas >=0){
            iz=filas;
        while (iz>0){
            cout << ' ';
            --iz;
        }
        cout << '*';
        de=de+2;
        z=de;
        while (de>0){
            cout << ' ';
            --de;
        }
        de=z;
        cout << '*' << endl;
        --filas;
        }
        int inv=numspaces-2;
        while(inv>0){
            int l,q;
            q=numspaces-1;

            for (l=1;l<h;++l){
                cout << ' ';
            }
            if (h!=q){
                ++h;
            }
            cout << '*';
            de=de-2;
            z=de;
            while (de>0){
            cout << ' ';
            --de;
        }
            de=z;
            cout << '*' << endl;
            --inv;
        }
        z=numspaces-1;
        for (hj=0;hj<z;++hj){
            cout << ' ';
        }
        cout << "* *" << endl; 


    }
    for (hj=0;hj<=(z);++hj){
            cout << ' ';
        }
    cout << '*' << endl << endl;
    }}
}
