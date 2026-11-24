#include <iostream>

using namespace std;

int main() {
    int i = 256 ;
    float  x ;   
    cout<<"x="<<endl; cin>>x;
    float s = x*x ; 
    do { 
        s = x*x+i/s ; 
        i=i/2 ; 
    } while ( i>=2) ;
    cout<<"javob: "<<x/s;
    return 0 ; 
}
