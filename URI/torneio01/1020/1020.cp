#include <iostream>
using namespace std;
int main(){
int a,aux;
cin >> a;

cout << a/365 << " ano(s)"<<endl;
aux = (a%365);
cout << aux/30 << " mes(es)"<<endl;
cout << aux%30 << " dia(s)"<<endl;
return 0;

}
