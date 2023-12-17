#include <iostream>
using namespace std;
int main() {
  int a1;
  int b1;
  int a2;
  int b2;
  cin >> a1 >> b1 >> a2 >> b2;
  if (b1 < a2) {
    if (b2 > a1) {
    cout << "[]";
    }
  }
    if (b2 < a1) {
    if (b1 > a2) {
    cout << "[]";
    }
  }
  else if (a2 == b1) {
    cout << '[' << a2 << ',' << a2 << ']' ;
  }
  else if (a1 == a2) {
    cout << '[' << a1 << ',' << b2 << ']' ;
  }
  else if (a1 >= a2) {
  if (b1 < b2) {
    cout << '[' << a1 << ',' << b1 << ']' ;
    }
  else if (b1 >= b2){
  cout << '[' << a1 << ',' << b2 << ']' ; 
  }
  }
 else if (a2 <= b1){
  if (b1 > b2){
  cout << '[' << a2 << ',' << b2 << ']' ;
  }
  else if (b2 >= b1){
  cout << '[' << a2 << ',' << b1 << ']' ;
  }
}
}
