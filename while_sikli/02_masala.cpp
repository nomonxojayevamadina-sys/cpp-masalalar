#include <iostream>

using namespace std;

int main() {
    int m , n ;
    int s = 0 ; 
    cout<<"bo'linmaning butun va qoldiq qismi aniqlanadi !!!"<<endl;
    cout<<"m:n="<<endl;
    cout<<"m="<<endl; cin>>m;
    cout<<"n="<<endl; cin>>n;
    while ( m>=n ) {
        m=m-n ; 
        s++; 
    } cout<<"butun: "<<s<<"   "<<"qoldiq : "<<m;
    return 0;
}
