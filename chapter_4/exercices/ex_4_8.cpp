/*
    Section 4 Exercise 8. 
    There is an old story that the emperor wanted to thank the inventor of the 
    game of chess and asked the inventor to name his reward. The inventor asked
    for one grain of rice for the first square, 2 for the second, 4 for the 
    third, and so on, doubling for each of the 64 squares. That may sound 
    modest, but there wasn’t that much rice in the empire! Write a program to 
    calculate how many squares are required to give the inventor at least 1000 
    grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains.
    You’ll need a loop, of course, and probably an int to keep track of which 
    square you are at, an int to keep the number of grains on the current square,
    and an int to keep track of the grains on all previous squares. We suggest 
    that you write out the value of all your variables for each iteration of the 
    loop so that you can see what’s going on.
*/

#include<iostream>
#include<cstdlib>
#include<math.h>

int how_many_squares(const int &grains) {
    int square=0, total_gr = 0;

    while(total_gr<grains){ total_gr += pow(2, square++); }

    return square;
}

int main() {
    // 1000 grains
    std::cout << how_many_squares(1000) << " squares to get 1000 grains" << std::endl;
    
    // 1000000 grains
    std::cout << how_many_squares(1000000) << " squares to get 1000000 grains" << std::endl;

    // 1000000000 grains
    std::cout << how_many_squares(1000000000) << " squares to get 1000000000 grains" << std::endl;

    return EXIT_SUCCESS;
}