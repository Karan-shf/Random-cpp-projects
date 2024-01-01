#include <iostream>
using namespace std;

int main () {
    int a[10];
    double s=0;
    for (int i=0;i<10;i++) {
        cout <<"enter number:";
        cin >>a[i];
        s=s+a[i];
    }
    double m=s/10;
    cout <<"average is:" <<m;
return 0;
}