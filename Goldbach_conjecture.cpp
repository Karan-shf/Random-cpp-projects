#include <iostream>
using namespace std;

bool is_aval (int n) {
    if (n==1) {return false;}
    if (n==2) {return true;}
    for (int i=2;i<=n/2;i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int main () {
    unsigned long long int n,m;
    cout <<"enter an even number:";
    cin >>n;
    for (int i=2;i<=n/2;i++) {
        m=n-i;
        if (is_aval(i)) {
            if (is_aval(m)) {
                cout <<i <<"," <<m <<endl;
            }
        }
    }

    return 0;
}