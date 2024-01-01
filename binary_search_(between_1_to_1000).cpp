#include <iostream>
using namespace std;

int main () {
    int n,max,min,mid;
    cout <<"enter a number: ";
    cin >>n;
    min=1;
    max=1000;
    while (n!=mid) {
        mid=(max+min)/2;
        if (mid==n) {
            cout <<"code's guess: " <<mid;
            return 0;
        }
        if (n>mid) {
            min=mid;
        } else {
            max=mid;
        }
    }
return 0;
}