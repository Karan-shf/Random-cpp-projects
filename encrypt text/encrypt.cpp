#include <iostream>
#include <fstream>
using namespace std;

void Show_Options() {

    cout <<"welcome!\n";

    cout <<"what would you like to do with the file ?\n";

    cout <<"[1]Read \t [2]Write \t [3]Clear\n";

}

void Read () {

    fstream file;
    string line;

    file.open("encrypted text.txt",ios::in);
    if (file.is_open()){
        while (getline(file,line)) {
            cout<<line <<endl;
        }
    }
    file.close();

}

void Write(){

    fstream file;
    string line;

    cout <<"enter text: ";
    cin.ignore();
    getline(cin,line);
    //cin >> line;

    file.open("encrypted text.txt",ios::app);

    if (file.is_open()) {
        file << line <<endl;
    }

    file.close();

}

void Clear(){

    fstream file;

    file.open("encrypted text.txt",ios::out);

    file.close();

}

int main () {

    int n;

    bool check = true;

    while (check) {

        system("clear");

        Show_Options();

        cin >>n;

        switch(n){
            case 1:
                Read();
                check = false;
                break;
            case 2:
                Write();
                check = false;
                break;
            case 3:
                Clear();
                check = false;
                break;
            default:
                break;
        }

    }

    
    











    return 0;
}