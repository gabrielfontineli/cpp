#include <iostream>
using namespace std;

int main (){
string n;
double a,b;
cout << fixed;
cout.precision(2);
cin >> n >>a>>b;
cout << "TOTAL = R$ " << a +(0.15*b)<<endl;

return 0;
}
