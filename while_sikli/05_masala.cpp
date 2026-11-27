#include <iostream>

using namespace std;

int main() {
    int n , k ; int s = 0 ;  
    cout<<"kiritilgan n soni k soniga bo'linadi!!!"<<endl;
    cout<<"n= "<<endl; cin>>n;
    cout<<"k= "<<endl; cin>>k;
    while ( n>=k) {
        n=n-k;
        s++; 
    } cout<<"butun : "<<s<<"  qoldiq : "<<n;
    return 0;
}
