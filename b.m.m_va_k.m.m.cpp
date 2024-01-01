#include <iostream>
using namespace std;

int main () {
    int n,m,max,min,i,R1,R2,B_M_M,K_M_M;
    cout <<"enter first number: ";
    cin >>n;
    cout <<"enter second number: ";
    cin >>m;
    if (n>m) {
        max=n;
        min=m;
        } else {
            max=m;
            min=n;
        }
    i=min;
    while (i>0) {
        R1=max%i;
        R2=min%i;
        if (R1==0 && R2==0) {
            B_M_M=i;
            break;
        }
        i--;
    }
    K_M_M=m*n/B_M_M;

    cout <<"B.M.M is: " <<B_M_M <<endl;
    cout <<"K.M.m is: " <<K_M_M;  
return 0;
}