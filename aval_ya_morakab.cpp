#include <iostream>
using namespace std;

int main () {
    int n;
    cout <<"enter a number:";
    cin >>n;
    if (n==1) {cout<<"na aval na morakab";
    return 0;
    }
    if (n==2) {cout <<"aval";
    return 0;
    }
    for (int i=2;i<n;i++) {
        int R=n%i;
        if (R==0) {
            cout <<"morakab";
            return 0;
            }
    }
cout <<"aval";
return 0;
}