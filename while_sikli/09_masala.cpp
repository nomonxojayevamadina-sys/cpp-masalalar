#include <iostream>

using namespace std;

int main() {
    int n , i = 1 ; 
    cout<<"n= "<<endl; cin>>n;
    while ( i * i <= n) {
        i++; 
    } cout<<"kvadrati n dan katta , eng katta son :"<<i-1;
    return 0 ; 
}
