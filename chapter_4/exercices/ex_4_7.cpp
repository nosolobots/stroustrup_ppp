/*
    Section 4 Exercise 7. 
    Modify the “mini calculator” from exercise 5 to accept (just) single-digit
    numbers written as either digits or spelled out.    
*/

#include<cstdlib>
#include<iostream>
#include<vector>

int get_val(const std::string &s) {
    int val=-1;
    std::vector<std::string> nums = { "zero", "one", "two", "three", "four", 
                            "five", "six", "seven", "eight", "nine" };
    
    char c = s[0];

    if(c >= '0' && c <= '9') { 
        val = (int)(c-'0'); 
    }
    else{ 
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==s) { 
                val = i;
                break; 
            }
        }
    }                                

    return val;
}

int main() {
    std::string num1, num2;
    char op;

    std::cout << "Give me two numbers and an operation (+, -, *, /)" << std::endl;

    std::cin>>num1>>num2>>op;

    int n1, n2, r;
    std::string sop = "";

    n1 = get_val(num1);
    n2 = get_val(num2);

    if(n1!=-1 && n2!=-1) {
        switch(op) {
            case '+':
                r = n1 + n2;
                sop = "sum";
                break;
            case '-':
                r = n1 - n2;
                sop = "subtract";
                break;
            case '*':
                r = n1 * n2;
                sop = "multiply";
                break;
            case '/':
                r = n1 / n2;
                sop = "divide";
                break;
        }
    }

    if(sop != "") {
        std::cout<<"The "<<sop<<" of "<<num1<<" and "<<num2<<" is "<<r<<std::endl;
    }
    else {
        std::cout<<"Operation not valid"<<std::endl;
    }
    
    return EXIT_SUCCESS;
}