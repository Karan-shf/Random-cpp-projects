#include <iostream>
using namespace std;

int main () {
    int a[9],Max;
    int b;
    char x=32;
    cout <<"enter number:";
    cin >>b;
    Max=b;
    for (int i=0;i<9;i++) {
        cout <<"enter number:";
        cin >> a[i];
        if (a[i]>Max) {
            Max=a[i];
        }
    }
    cout <<"Max is" <<x <<Max;
return 0;
}