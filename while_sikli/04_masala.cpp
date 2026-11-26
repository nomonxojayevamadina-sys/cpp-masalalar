#include <iostream>

using namespace std;

int main() {
    int a , b; 
    int s = 0 ;
    cout<<"a kesmada b kesmani nechta joylashtirilishi aniqlanadi!!!"<<endl;
    cout<<"a="<<endl; cin>>a;
    cout<<"b="<<endl; cin>>b;
    while ( a>=b) {
        a=a-b ; 
        s++ ; 

    } cout<<"natija : "<<s<<" ta joylashadi!"<<endl;
    cout<<"qoldiq qism: "<<a;
    return 0;
}
