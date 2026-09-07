// a va b orasidagi barcha butun sonlar va chiqarilgan sonlar miqdorini aniqlash
#include <iostream>

using namespace std;

int main() {
  int a, b, s = 0;
  cout<<" a va b orasidagi barcha butun sonlar chiqariladi!"<<endl;
  cout<<"a="<<endl; cin>>a;
  cout<<"b="<<endl; cin>>b;
  for ( int i = a ; i<=b ; i++) {
  cout<<i<<" ";
  s = s+1;
  }
  cout<<endl<<"chiqarilgan sonlar miqdori: "<<s;
  
  return 0;
}
