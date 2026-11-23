#include <iostream>

using namespace std;

int main() {
    int n, k = 2  ; float x; 
    float q, r, b, c, d;
    cout<<"n="; cin>>n; cout<<"b="; cin>>b;
    cout<<"q="; cin>>q; cout<<"c="; cin>>c;
    cout<<"r="; cin>>r; cout<<"d="; cin>>d;
    float x0=c;
    float x1=d;
    do {
        x= q*x1+r*x0+b ; 
        x0=x1 ; 
        x1=x; 
        k++ ; 
    } while (k<=n) ; 
    cout<<"natija:"<<x;
     return 0 ; 
}
