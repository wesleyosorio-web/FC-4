#include <iostream>
#include <fstream>

using namespace std;

int main() {

    unsigned long long r = 10;
    unsigned long long a = 0x5DEECE66D;
    unsigned long long M = 1ULL << 48;
    unsigned long long c = 0xB;

    ofstream file("puntosLC_2e48.txt");

    int N = 256;

    for(int i = 0; i < N; i++) {

        r = (a * r + c) % M;
        float x = (float)r / M;

        r = (a * r + c) % M;
        float y = (float)r / M;

        file << x << " " << y << "\n";
    }
}
