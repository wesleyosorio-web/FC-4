#include <iostream>
#include <fstream>
using namespace std;

int main(){

    int a = 57;
    int c = 1;
    int M = 256;
    int r = 10;

    ofstream file("puntos.txt");

    int N = 256; 

    for(int i=0; i<N; i++){

        r = (a*r + c) % M;
        float x = (float)r/M;

        r = (a*r + c) % M;
        float y = (float)r/M;

        file << x << " " << y << "\n";
    }

}