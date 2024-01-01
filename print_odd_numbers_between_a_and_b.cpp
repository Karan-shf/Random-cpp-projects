#include <iostream>
using namespace std;

int main () {
    int a,b;
    cout <<"enter a:";
    cin >>a;
    cout <<"enter b:";
    cin >>b;
    int i=a+1;
    while (i<b) {
        double R=i%2;
        if (R!=0) {cout <<i <<endl;}       
        i++;
    }
return 0;
}