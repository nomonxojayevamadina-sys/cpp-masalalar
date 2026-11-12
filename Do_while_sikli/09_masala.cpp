#include <iostream>

#include <math.h>

using namespace std;

int main() {
    int n ; 
    float x ; 
    float p = 1 ;
    float f = 1 ;  
    cout<<"x = "<<endl; cin>>x;
    cout<<"n = "<<endl; cin>>n;
    int i = 1 ; 
    do { 
        f = f * i ;
        p = p*(1.0+sin(i*x)/f) ;
        i++ ;
    } while ( i <=n) ; 
    cout<<"natija: "<<p;
    return 0;
}
