#include <iostream>
using namespace std;
int main(){
    char ll2,ll1,lletra;
    // Es com binari, a i es 0,1, de manera que hi ha 2^3 possibilitats, 8.
    int aaa=291;
    int aab=292;
    int aba=292;
    int baa=292;
    int abb=293;
    int bab=293;
    int bba=293;
    int bbb=294;
    bool aaa1=false;
    bool aab1=false;
    bool aba1=false;
    bool baa1=false;
    bool abb1=false;
    bool bab1=false;
    bool bba1=false;
    bool bbb1=false;
    int i;
    for (i=0;cin>>lletra;++i){
        int final=ll2+ll1+lletra;
        cout << final << " " << ll2 << ll1 << lletra << endl;
        if(final==aaa){
            if(!aaa1){
                aaa1=true;
            }
            else{
            cout << "aaa " << i << endl;
            return 0;
            }
        }
        if(final==aab && lletra=='b'){
            if(!aab1){
                aab1=true;
            }
            else{
            cout << "aab " << i << endl;
            return 0;
            }

        }
        if(final==aba && lletra=='a' && ll1=='b'){
            if(!aba1){
                aba1=true;
            }
            else{
            cout << "aba " << i << endl;
            return 0;
            }

        }
        if(final==baa && ll2=='b'){
            if(!baa1){
                baa1=true;
            }
            else{
            cout << "baa " << i << endl;
            return 0;
            }

        }
        if(final==abb && ll2=='a'){
            if(!abb1){
                abb1=true;
            }
            else{
            cout << "abb " << i << endl;
            return 0;
            }

        }
        if(final==bab && ll2=='b' && ll1=='a'){
            if(!bab1){
                bab1=true;
            }
            else{
            cout << "bab " << i << endl;
            return 0;
            }

        }
        if(final==bba && ll2=='b' && ll1=='b'){
            if(!bba1){
                bba1=true;
            }
            else{
            cout << "bba " << i << endl;
            return 0;
            }

        }
        if(final==bbb){
            if(!bbb1){
                bbb1=true;
            }
            else{
            cout << "bbb " << i << endl;
            return 0;
            }

        }
        ll1=lletra;
        ll2=ll1;
    }
    return 0;
}
