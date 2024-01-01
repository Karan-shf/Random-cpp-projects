#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int j=1;
    for (int k=0;k<8;k++) {
        for (int i=0;i<pow(2,8-j);i++) {
            cout <<j;
        }
        j++;
        cout <<endl;
    }
    
    return 0;
}