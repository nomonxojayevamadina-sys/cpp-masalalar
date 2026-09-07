// a va b orasidagi barcha butun sonlar kamayish tartibida chiqariladi va chiqarilgan sonlar miqdori aniqlanadi
#include <iostream>

using namespace std;

int main() {
  int a, b, s = 0;
  cout<<" a va b orasidagi barcha butun sonlar kamayish tartibida chiqariladi!"<<endl;
  cout<<"a="<<endl; cin>>a;
  cout<<"b="<<endl; cin>>b;
  for ( int i = a-1 ; i>b ; i--) {
  cout<<i<<" ";
  s = s+1;
  }
  cout<<endl<<"chiqarilgan sonlar miqdori: "<<s;
  
  return 0;
}
