#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int n,R;
    int i=0;
    int s=0;
    cout <<"enter binary number: ";
    cin >>n;
    while (n>0) {
        R=n%10;
        s=s+R*pow(2,i);
        n=n/10;
        i++;
    }
    cout <<"your decimal number is: " <<s;
return 0;
}