#include <iostream>
using namespace std;

int main () {

    string all[4] = {"abcdefghijklmnopqrstuvwxyz" , "ABCDEFGHIJKLMNOPQRSTUVWXYZ" , "123456789" , "!@#$%^&*"};

    string pass;
    cout <<"enter your password:";
    cin >> pass;

    int l = pass.length();

    int a[l];

    for (int i=0;i<l;i++) {
        //i=number of char in pass
        for (int j=0;j<4;j++) {
            //j=type of char
            for (int k=0;k<all[j].length();k++) {
                
                if (pass[i]==all[j][k]) {
                    a[i]=j;
                }

            }

        }

    }

    bool c[4] = {false , false , false, false};
    for (int i=0;i<l;i++) {
        if (a[i]==0) {c[0]=true;}
        if (a[i]==1) {c[1]=true;}
        if (a[i]==2) {c[2]=true;}
        if (a[i]==3) {c[3]=true;}
    }

    int k=0;
    for (int i=0;i<4;i++) {
        if (c[i]) {k++;}
    }

    switch (k) {
        case 1:
            cout <<"your password is not strong at all! :(\n";
            break;
        case 2:
            cout <<"your password is not very strong!\n";
            break;
        case 3:
            cout <<"your password is semi-strong\n";
            break ;
        case 4:
            cout <<"your password is strong :)\n";
            break;
        default:
            cout <<"what the f*$# have you entered as your password ?!!";
    }


    return 0;
}