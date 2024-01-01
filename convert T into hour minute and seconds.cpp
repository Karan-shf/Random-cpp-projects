#include <iostream>
using namespace std;

int main () {
    int T,h,min,sec;
    char x=32;
    cout <<"enter T: ";
    cin >>T;
    h = T/3600;
    T= T-3600*h;
    min = T/60;
    sec = T-60*min;

    cout <<h <<x <<"hour ," <<min <<x <<"minutes ," <<sec <<x <<"seconds";
return 0;
}