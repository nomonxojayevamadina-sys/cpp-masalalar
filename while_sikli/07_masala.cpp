#include <iostream>

using namespace std;

int main() {
    int p = 1 ,  n;
    cout<<"kiritilgan son 2 ning darajasiligi aniqlanadi!!!"<<endl;
    cout<<"n= "<<endl; cin>>n;
    while ( p<n ) {
        p = p*2 ; 
    } if (p==n) cout<<"2 ning darajasi"<<endl;
    else
     cout<<"2 ning darajasi emas"<<endl;
    return 0 ; 
}
