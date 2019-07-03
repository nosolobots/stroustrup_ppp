/*
    Section 4 Exercise 14.
    Modify the program described in the previous exercise to take an input value
    max and then find all prime numbers from 1 to max.
*/

#include<iostream>
#include<vector>
#include<math.h>
#include<cstdlib>
#include<algorithm>

int main() {
    std::cout<<"Give a positive number: ";
    
    int n=0;
    while(n<1) { 
        if(!(std::cin>>n)) {
            std::cin.clear(); 
            std::cin.ignore(256, '\n');
        }
    }

    // Add the numbers from 1 to n to a vector
    std::vector<int> nums;
    for(int i=1; i<=n; i++) {
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