#include <iostream>

using namespace std;

int main() {
    int a , b , q ;
    cout<<"ekub aniqlanadi!!!"<<endl;
    cout<<"a="<<endl; cin>>a;
    cout<<"b="<<endl; cin>>b;
    while (b!=0) {
        q = a % b ; 
        a = b ; 
        b = q ; 
    }
    cout<<"EKUB = "<<a;
    return 0 ; 
}
