#include <iostream>
using namespace std;
int main(){
    char capitan;
    int x,y;
    while(cin >> capitan){
        if (capitan=='n'){
            --y;
        }
        else if (capitan=='s'){
            ++y;
        }
        else if (capitan=='o'){
            --x;
        }
        else if (capitan=='e'){
            ++x;
        }

    }
    std::cout << "(" << x << ", " << y << ')' << endl;
    return 0;
}