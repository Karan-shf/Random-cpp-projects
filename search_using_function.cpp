#include <iostream>
using namespace std;

string func (int n) {
    for (int i=0;i<=1000;i++) {
        if (i==n) {return "yes";}
    }
    return "no";
}

int main () {
    int n;
    cout <<"enter your number ";
    cin >>n;
    cout <<func(n);
}