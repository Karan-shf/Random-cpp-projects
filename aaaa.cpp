#include <iostream>
using namespace std;

int main () {
    int m , M  , a , b , bmm , r;
    cin >> a >> b ;
    if (a >= b ){
        M = a ;
        m = b;
    } else {
        m = a; 
        M = b ;
    }
    while( true ){
        r = M - m ; 
        if( r == 0){
            bmm = m ;
            break ;
        }
        M = m ;
        m = r ;
    }
    cout<< bmm ;












    return 0;
}