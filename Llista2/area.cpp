#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int cops;
    cin >> cops;
    double n1,n2,n3;
    string forma;
    cout << fixed << showpoint;
    cout << setprecision(6);
    while (cops != 0){
    cin >> forma;
    if (forma == "rectangle"){
        cin >> n1 >> n2;
        cout << double(n1*n2) << endl;
    }
    else if (forma == "cercle"){
        cin >> n3;
        cout << (M_PI*n3*n3) << endl;
    }
    --cops;
}
return 0;
}