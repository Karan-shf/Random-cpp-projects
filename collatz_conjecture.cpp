#include <iostream>
using namespace std;

int main () {

    unsigned long long int n;
    cout <<"enter n:";
    cin >>n;

    while (true) {

        if (n%2==0) {
            n = n/2;
        } else {
            n = (3*n)+1;
        }

        cout <<n <<endl;

        if (n==1) {
            return 0;
        }

    }
}