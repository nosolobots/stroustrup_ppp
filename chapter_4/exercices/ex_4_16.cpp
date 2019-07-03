/*
    Section 4 Exercise 16.
    In the drill, you wrote a program that, given a series of numbers, found 
    the max and min of that series. The number that appears the most times in a 
    sequence is called the mode. Create a program that finds the mode of a set 
    of positive integers.
*/

#include<cstdlib>
#include<iostream>
#include<vector>
#include<algorithm>

int count(std::vector<int> &v, const int &val) {
    int c = 0;
    std::vector<int>::iterator it = v.begin();

    while(it != v.end()) {
        if((it=find(it, v.end(), val))!=v.end()){
            ++c;
            ++it;
        };
    }

    return c;
}

void mode(std::vector<int> &data, int &val) {
    val = -1;
    int mcount = 0, ncount;
    
    std::vector<int> prev;
    std::vector<int>::iterator it;

    for(int n:data) {
        if(!prev.size() || (it = find(prev.begin(), prev.end(), n)) == prev.end()) {
            // First occurrence of a number
            prev.push_back(n);
            if((ncount = count(data, n)) > mcount) {
                val = n;
                mcount = ncount;
            }
        }
    }
}

int main() {
    const char fin = '|';
    int num;
    std::vector<int> nums;

    std::cout<<"Give me positive numbers (|: end)"<<std::endl;

    while(true) {
        if(std::cin>>num) {
            if(num>0) { nums.push_back(num); }
        }
        else {
            std::cin.clear();

            char c;
            std::cin>>c;
            if(c==fin){
                break;
            }
        }
    }    

    int m;
    mode(nums, m);
    std::cout<<"The mode is "<<m<<std::endl;

    return EXIT_SUCCESS;
}
