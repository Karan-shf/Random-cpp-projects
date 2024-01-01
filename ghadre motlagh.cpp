#include <iostream>
using namespace std;

int main () {
    int n;
    cout <<"enter a number:";
    cin >>n;
    if (n<0) {
        n=-1*n;
        cout <<n;
    } else {cout <<n;}
return 0;
}