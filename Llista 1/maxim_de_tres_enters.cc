#include <iostream>
using namespace std;
int main () {
  int a,b,c,x,y;
  cin >> a >> b >> c;
  x=max(a,b);
  y=max(x,c);
  cout << y << endl;
}
