/*
    Section 4 Exercise 5. 
    Write a program that performs as a very simple calculator. Your calculator 
    should be able to handle the four basic math operations — add, subtract, 
    multiply, and divide — on two input values. 
    Your program should prompt the user to enter three arguments: two double 
    values and a character to represent an operation. If the entry arguments are
    35.6, 24.1, and '+', the program output should be 
    "The sum of 35.6 and 24.1 is 59.7".    
*/

#include<cstdlib>
#include<iostream>

using namespace std;

int main() {
    double n1, n2, r;
    char op;
    string sop = "";

    cout<<"Give me two numbers and an aoperation (+, -, *, /)"<<endl;
    while(!(cin>>n1>>n2>>op)) { 
        cin.clear();
        string s; 
        cin>>s;
    }

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

    if(sop != "") {
        cout<<"The "<<sop<<" of "<<n1<<" and "<<n2<<" is "<<r<<endl;
    }
    else {
        cout<<"Operation '"<<op<<"' not valid"<<endl;
    }

    return EXIT_SUCCESS;
}

