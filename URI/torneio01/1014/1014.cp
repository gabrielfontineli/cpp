#include <iostream>
using namespace std;
int main (){
int x;float y;

cout << fixed;
  cout.precision(1);
cin >> x >> y;
cout.precision(3);
  cout << x/y << " km/l" << endl;


  return 0;
}
