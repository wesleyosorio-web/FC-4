#include <iostream>
#include <random> 
#include <fstream>

int main () {

std :: ofstream file("puntostwi.txt");


std :: random_device rd ; 
std :: mt19937 gen ( rd () ); 


std :: uniform_int_distribution <> dis (1 , 100) ;


for (int i = 0; i < 128; ++ i) {
int random_number1 = dis ( gen ); 
std :: cout <<" Random number : " << random_number1 << std :: endl ;

int random_number2 = dis ( gen ); 
std :: cout <<" Random number : " << random_number2 << std :: endl ;

float x = random_number1;
float y = random_number2;

file << x << " " << y << "\n";
    
}
return 0;
}
