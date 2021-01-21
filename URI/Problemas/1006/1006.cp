#include <iostream>
using namespace std;

int main () {

double a,b,c;

cout << fixed;
  cout.precision(1);
cin >> a >> b >> c;
cout << "MEDIA = " << ((a*2)+(b*3)+(c*5))/(3+5+2)<<endl;
return 0;
}

