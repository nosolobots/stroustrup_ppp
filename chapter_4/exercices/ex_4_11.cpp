/*
    Section 4 Exercise 11.
    Create a program to find all the prime numbers between 1 and 100. One way 
    to do this is to write a function that will check if a number is prime 
    (i.e., see if the number can be divided by a prime number smaller than 
    itself) using a vector of primes in order (so that if the vector is called
    primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then write a loop
    that goes from 1 to 100, checks each number to see if it is a prime, and 
    stores each prime found in a vector. Write another loop that lists the 
    primes you found. You might check your result by comparing your vector of 
    prime numbers with primes. Consider 2 the first prime. 
*/

#include<iostream>
#include<cstdlib>
#include<vector>

bool isprime(const int &i, const std::vector<int> &primes) {
    bool prime = false;
    for(int n:primes) {
        if(i == n) {
            prime = true;
            break;
        }
    }

    return prime;
}

int main() {
    int primes_ar[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
                     53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

    std::vector<int> my_primes;
    std::vector<int> primes(primes_ar, primes_ar + sizeof(primes_ar)/sizeof(primes_ar[0]));

    for(int i=2; i<100; i++) {
        if(isprime(i, primes)) {
            my_primes.push_back(i);
        }
    }

    std::cout<<"my_primes\tprimes"<<std::endl;

    std::vector<int>::iterator itm = my_primes.begin();
    std::vector<int>::iterator itp = primes.begin();

    while(itm!=my_primes.end() || itp!=primes.end()) {
        std::cout<<"\t";
        if(itm!=my_primes.end()) {
            std::cout<<*itm;
            itm = std::next(itm);
        } 
        
        if(itp!=primes.end()) {
            std::cout<<"\t"<<*itp;
            itp = std::next(itp);
        } 
        std::cout<<std::endl;
    }
    return EXIT_SUCCESS;
}