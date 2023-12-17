#include <iostream>
using namespace std;
int main() {
int temperatura;
cin >> temperatura;
if (temperatura < 10) {
if (temperatura <= 0){
cout << "fa fred" << endl << "l'aigua es gelaria\n";
}
else {
cout << "fa fred\n";
}
}
else if (temperatura > 30) {
if (temperatura >= 100) {
cout << "fa calor" << endl << "l'aigua bulliria\n";
}
else {
cout << "fa calor\n";
}
}
else {
cout << "s'esta be\n";
}
}
