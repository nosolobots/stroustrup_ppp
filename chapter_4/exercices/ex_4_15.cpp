/*
    Section 4 Exercise 15.
    Write a program that takes an input value n and then finds the first n primes.
*/

#include<iostream>
#include<cstdlib>
#include<vector>

bool is_prime(const int &n) {
    if(n>0 && n<=3) {
        return true;
    }

    for(int i=2; i<=n/2; i++) {
        if(!(n%i)) { return false; } 
    }

    return true;
}

int main() {
    std::cout<<"How many primes? ";
    
    int n=0;
    while(n<1) { 
        if(!(std::cin>>n)) {
            std::cin.clear(); 
            std::cin.ignore(256, '\n');
        }
    }    

    int count = 0;
    std::vector<int> primes;
    for(int i=1; count<n; i++) {
        if(is_prime(i)) {
            primes.push_back(i);
            count++;
        }
    }

    // show prime numbers
    int col = 0;
    std::cout << "Primes:" << std::endl;
    for(int n:primes) {
        std::cout << n << "\t";
        if(++col == 10) {
            std::cout<<std::endl;
            col = 0;
        };
    } 
    std::cout<<std::endl;   
}
