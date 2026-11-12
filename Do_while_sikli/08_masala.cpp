#include <iostream>

#include <math.h>

using namespace std;

int main() {
    int n ; 
    float x ; 
    float s = 0 ; 
    cout<<"x = "<<endl; cin>>x;
    cout<<"n = "<<endl; cin>>n;
    int i = 1 ; 
    do { 
        s = s+ (x+(cos(i*x)))/ pow(2,i) ; 
        i++ ;
    } while ( i <=n) ; 
    cout<<"natija: "<<s;
    return 0;
}
