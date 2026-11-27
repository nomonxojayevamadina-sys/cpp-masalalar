#include <iostream>

using namespace std;

int main() {
    int p = 1 ,  n;
    cout<<"kiritilgan son 3 ning darajasiligi aniqlanadi!!!"<<endl;
    cout<<"n= "<<endl; cin>>n;
    while ( p<n ) {
        p = p*3 ; 
    } if (p==n) cout<<"3 ning darajasi"<<endl;
    else
     cout<<"3 ning darajasi emas"<<endl;
    return 0 ; 
}
