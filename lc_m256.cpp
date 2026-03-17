#include <iostream>
using namespace std;

int c = 1;
int a = 57;
int M = 256;
int r1 = 10;
int r0 = 10;

int main(){
    
    int periodo = 0;

    do {
    
        cout << r1 << "\n";

        int riplus1 = (a*r1 + c) % M;
        r1 = riplus1;

        periodo++;

    } while (r1 != r0);
    
    cout << "El periodo es: " << periodo << "\n";

    return 0;
}