#include<iostream>
#include <string.h>
using namespace std;
void showHelp();
main( int argc, char *argv[]){
    // arguments counter - argc
    // arguments values  - argv

    for(int i = 0; i < argc; i++){
         if((strcmp(argv[i], "-h") == 0) && i == 1)
         showHelp();
    }

    for ( int i = 0; i < argc; i++){
        cout << argv[i] << endl;
    }
    char a[] = {'a', 'b', 'c', 'd', '\0'};
    char *b = "this is a test";
    char *c[] = {"hello", "this is", "a test"};
    // cout << c[2] << endl;
    char x[] = "a"; // name of array is a pointer 
    char y[] = "b";
    cout << (x == y) << endl;
    cout << (&x[0] == &y[0]) << endl;
    string a1 = "xd", a2 = "xd";
    cout << (a1 == a2) << endl;
    cout << (strcmp(x, y)) << endl; // 0 - variables are the same, 1 the first string is greater, -1 that the first string is lower
}
void showHelp(){
    cout << "Hello there" << endl;
}