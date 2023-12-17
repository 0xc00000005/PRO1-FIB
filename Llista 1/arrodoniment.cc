#include <iostream>
using namespace std;
int main () {
  double a = 1.00;
  cin >> a;
  int b,c;
  c = int(a);
  b=c;
 // cout << c << endl;
  //cout << ++c << endl;
   double d = 0.00;
   d = double(c);
   double f = 0.00;
   f = a-c;
//  cout << fixed << f << endl;
if (f == 0) {
cout << c << ' ' << c << ' ' << c << endl;
}
else {
  if (f<0.5){
  cout << c << ' ' << ++c << ' ' << b << endl;
  }
  else if (f>0.5){
  cout << c << ' ' << ++c << ' ' << (b+1) << endl;
  }
  else if (f==0.5){
  cout << c << ' ' << ++c << ' ' << (b+1) << endl;
  }
}


}
