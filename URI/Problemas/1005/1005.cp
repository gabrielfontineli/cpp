#include <iostream>
using namespace std;

int main(){
double a,b,x;
cout << fixed;
cout.precision(1);
cin >> a >> b;
x = ((a*3.5)+(b*7.5))/(3.5+7.5);
cout <<fixed;
cout.precision (5);
cout << "MEDIA = " << x << endl;

return 0;
}
