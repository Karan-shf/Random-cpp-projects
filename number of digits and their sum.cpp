#include <iostream>
using namespace std;

int main () {
    int n,R;
    int s=0;
    int w=0;
    cout <<"enter your number: ";
    cin >>n;
    while (n>0) {
        R=n%10;
        s=s+R;
        w++;
        n=n/10;
    }
    cout <<"your number has " <<w <<" digits \n";
    cout <<"and their sum is: " <<s;
return 0;
}