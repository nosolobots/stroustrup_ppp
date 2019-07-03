/*
    Section 4 Exercise 13.
    Create a program to find all the prime numbers between 1 and 100. There is 
    a classic method for doing this, called the “Sieve of Eratosthenes.” If you
    don’t know that method, get on the web and look it up. Write your program 
    using this method.
*/

#include<iostream>
#include<vector>
#include<math.h>
#include<cstdlib>
#include<algorithm>

int main() {
    // Add numbers 1 to 100 to a vector
    std::vector<int> nums;
    for(int i=1; i<=100; i++) {
        nums.push_back(i);
    }    

    // main iterator
    std::vector<int>::iterator mit = nums.begin();

    // skip number 1
    ++mit;

    for(;pow(*mit, 2)<=*(--nums.end());++mit) {
        // remove multiples
        for(int fact = 2; (*mit)*fact <= *(--nums.end()); fact++) {
            std::vector<int>::iterator it = std::find(mit, nums.end(), (*mit)*fact);
            if(it != nums.end()) {
                nums.erase(std::find(mit, nums.end(), (*mit)*fact));
            }
        }
    }

    // show prime numbers
    int col = 0;
    std::cout << "Primes:" << std::endl;
    for(int n:nums) {
        std::cout << n << "\t";
        if(++col == 10) {
            std::cout<<std::endl;
            col = 0;
        };
    } 
    std::cout<<std::endl;  
}