// for sikli yordamida faktorialni aniqlash uchun dastur
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  int p = 1;
  cout<<"faktorial hisoblanadi!!!"<<endl;
  cout<<"haqiqiy son kiriting: "<<endl;
  
  cout<<"n="; cin>>n;
  
  for ( int  i = 1 ; i<=n  ; i++) {
    
    
    p *= i;
  }
  cout<<"javob: "<<p;
  
  return 0;
}
