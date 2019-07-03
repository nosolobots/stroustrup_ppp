/*
    Section 4 Exercise 9. 
    Try to calculate the number of rice grains that the inventor asked for in 
    exercise 8 above. You’ll find that the number is so large that it won’t fit
    in an int or a double. Observe what happens when the number gets too large 
    to represent exactly as an int and as a double. What is the largest number 
    of squares for which you can calculate the exact number of grains (using an
    int)? What is the largest number of squares for which you can calculate the
    approximate number of grains (using a double)?
*/

#include<iostream>
#include<cstdlib>
#include<math.h>
#include<limits>

int main() {
    int i;

    // Using int
    unsigned int igrain = 0;
    for(i=0; i<64; i++) { igrain += pow(2, i); }
    std::cout << "Using uint, the number of grains is " << igrain << std::endl;

    // Using double
    double dgrain = 0;
    for(i=0; i<64; i++) { dgrain += pow(2, i); }
    std::cout << "Using double, the number of grains is " << dgrain << std::endl;

    // Max squares using unsigned int
    unsigned int new_pow;
    for(i=0, igrain=0;; i++) { 
        new_pow = pow(2, i);
        if(std::numeric_limits<unsigned int>::max() - igrain > new_pow) {
            igrain += new_pow;
        }
        else {
            break;
        }
    }
    std::cout << "Using uint, the largest number of squares is " << i;
    std::cout << " and the number of grains is " << igrain << std::endl;    

    // Max squares using double
    for(i=0, dgrain=0;; i++) { 
        new_pow = pow(2, i);
        if(std::numeric_limits<double>::max() - dgrain > new_pow) {
            dgrain += new_pow;
        }
        else {
            break;
        }
    }
    std::cout << "Using double, the largest number of squares is " << i;
    std::cout << " and the number of grains is " << dgrain << std::endl;   
}