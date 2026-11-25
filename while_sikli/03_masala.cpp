#include <iostream>

using namespace std;

int main() {
    int n , i=1; 
    int s = 0 ; 
    cout<<"1 dan n gacha yig'indi aniqlanadi!!!"<<endl;
    cout<<"n="<<endl; cin>>n;
    while ( i<=n) {
        s+=i;
        i++ ; 
    } cout<<"natija: "<<s;
    return 0;
}
