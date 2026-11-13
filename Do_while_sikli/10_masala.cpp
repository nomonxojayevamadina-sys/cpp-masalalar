#include <iostream>

#include <cmath>

using namespace std;

int main() {
    int n ; 
    float a = 1.0 ; 
    int k = 1 ; 
    cout<<"n="<<endl; cin>>n;
    do { 
        a = k * a + 1.0 / k ; 
        k++ ; 
    } while ( k <= n ) ;
    cout<<"javob : "<<a;  
    return 0 ; 
}
