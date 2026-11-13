// juft sonlar yig'indisini aniqlash dasturi for sikli yordamida 
#include <iostream>

using namespace std;

int main() {
    int n , s  = 0 ; 
    cout<<"juft sonlar yig'indisi aniqlanadi!!!"<<endl;
    cout<<"n= "<<endl; cin>>n;
    for ( int i = 1  ;i<=n ; i++) {
        if ( i % 2 == 0 ) {
        s += i ; 
        cout<<i<<endl;
        }
    }
    cout<<"juft sonlar yig'indisi "<<s<<endl;
    return 0 ; 
    
}
