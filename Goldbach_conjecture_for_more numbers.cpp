#include <iostream>
using namespace std;

string aval (int n) {
    int R;
    if (n==2) {return "aval";}
    for (int i=2;i<n;i++) {
        R=n%i;
        if (R==0) {
            return "morakab";
        }
    }
    return "aval";
}

int main () {
    int n,m,l;
    cout <<"enter limit:";
    cin >>l;
    for (int n=4;n<=l;n+=2) {
        for (int i=2;i<n;i++) {
            m=n-i;
            if (aval(i)=="aval") {
                if (aval(m)=="aval") {
                    cout  <<n <<":" <<i <<"," <<m <<endl;
                    break;
                }
            }
        }     
    }

    return 0;
}