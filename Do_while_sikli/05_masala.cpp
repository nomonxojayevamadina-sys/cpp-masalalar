#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n ; 
    float s = 0 ;
    float  k = 1.0 ; 
    cout<<"n= "<<endl; cin>>n ; 
    do { 
        s = s+ pow(-1, k)/((2*k+1)*k); 
        k++ ; 
    } while ( k <= n ) ; 
    cout<<"natija : "<<s ; 
    return 0 ; 
}
