/*
    Section 4 Exercise 12.
    Modify the program described in the previous exercise to take an input value
    max and then find all prime numbers from 1 to max.
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
    int primes_ar[] = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
                     53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };

    std::vector<int> my_primes;
    std::vector<int> primes(primes_ar, primes_ar + sizeof(primes_ar)/sizeof(primes_ar[0]));

    std::cout<<"Give a positive number less than 100: ";
    
    int n=0;
    while(n<1 || n>100) { 
        if(!(std::cin>>n)) {
            std::cin.clear(); 
            std::cin.ignore(256, '\n');
        }
    }

    for(int i=1; i<=n; i++) {
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