#include <iostream>
using namespace std;

int c = 1;
int a = 4;
int M = 9;
int r1 = 3;

int main(){
    for (int i=1 ; i<=M; ++i) {
        float rnormalizado = (float)r1/M;
        cout << rnormalizado << "\n";

        int riplus1 = (a*r1 + c) % M;
        r1 = riplus1;
    }
    return 0;
}