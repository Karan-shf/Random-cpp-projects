#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {

    string all[4] = {"abcdefghijklmnopqrstuvwxyz" , "ABCDEFGHIJKLMNOPQRSTUVWXYZ" , "123456789" , "!@#$%^&*"};

    int n;
    cout <<"how long do you want your password to be? ";
    cin >>n;

    srand(time(0));
    int l,k,j;
    string pass;
    for (int i=0;i<n;i++) {

        j = rand()%4;

        l = all[j].length();

        k = rand()%l;

      //pass += all [rand()%4] [rand()%all[rand()%4].length()]
        pass += all [j] [k];

    }

    cout <<"\nyour password: " <<pass <<endl;

    return 0;
}