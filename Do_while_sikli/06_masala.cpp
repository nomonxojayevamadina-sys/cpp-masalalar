#include <iostream>

#include <math.h>

using namespace std;

int main() {
    int n ; 
    float x ; 
    float s = 0 ; 
    float p = 1.0;
    cout<<"x = "<<endl; cin>>x;
    cout<<"n = "<<endl; cin>>n;
    int i = 1 ; 
    do { 
        p = p*i ; 
        s = s+ pow(x, i)/p;
        i++ ;
    } while ( i <=n) ; 
    cout<<"natija: "<<s;
    return 0;
}
