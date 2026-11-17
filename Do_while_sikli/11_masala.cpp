#include <iostream>

#include <cmath>

using namespace std;

int main() {
    int n , i = 4 ; 
    float v , v1 = 0 ;
    float v2 = 0 ; 
    float v3 = 1.5 ; 
    cout<<" (n>=4 ) n= "<<endl; cin>>n; 
    do { 
        v= (i+1.0)/(i*i+1)*v3-v2*v1 ; 
        v1 = v2 ; 
        v2 = v3 ; 
        v3 = v ; 
        i++ ;
    } while ( i<=n ) ; 
    cout<<"natija= "<<v ; 
    return 0;
}
