#include <iostream>

#include <cmath>

using namespace std;

int main() {
    int n ,  i= 2 ; 
    float p = 1 , a ; 
    float a0 = 1 ; float a1 = 1 ; 
    cout<<"n="; cin>>n;
    do { 
        a = a0+a1/pow(2,i-1) ; 
        p = p*a ; 
        a0=a1;
        a1=a;
        i++ ;
    } while ( i<=n) ;
    cout<<"javob : "<<p;
    return 0;
}
