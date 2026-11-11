#include <iostream>

using namespace std;

int main() {
    int n ; 
    float s = 0 ;
    float  k = 1.0 ; 
    cout<<"n= "<<endl; cin>>n ; 
    do { 
        s = s+1.0/k ; 
        k++ ; 
    } while ( k <= n ) ; 
    cout<<"natija : "<<s ; 
    return 0 ; 
}
