#include <iostream>
using namespace std;

int main () {
    int M,R,D;
    cout <<"enter M: ";
    cin >>M;
    cout <<"enter R: ";
    cin >>R;
    if (M<=186) {
        D=(M-1)*31+R;
    } else {
        D=186+(M-7)*30+R;
    }
    cout <<D;
return 0;
}