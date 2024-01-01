#include <iostream>
using namespace std;

int main () {
    int n;
    cout <<"enter the number: ";
    cin >>n;
    int F1=1;
    int F2=1;
    cout <<F1 <<endl;
    cout <<F2 <<endl;
    for (int i=3;i<=n;i++) {
        int F3=F1+F2;
        cout <<F3 <<endl;
        F1=F2;
        F2=F3;
    }
return 0;
}