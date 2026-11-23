#include <iostream>

#include <cmath>

using namespace std;

int main() {
    int i = 101;
    float s = 103 ; 
    do { 
        s=i+1.0/s ; 
        i-=2 ; 
    } while (i>=1) ;
    cout<<"natija : "<<1.0/s;
    return 0 ; 
}
