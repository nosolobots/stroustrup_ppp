/*
Section 4 Drill step 1.
Write a program that consists of a while-loop that (each time around the loop) reads in
two INTs and then prints them. Exit the program when a terminating '|' is entered.
*/

#include "std_lib_facilities.h"

main()
{
    constexpr char fin = '|';

    int a, b;
    
    while(true) {
        if(cin>>a>>b) {
            cout<<a<<" "<<b<<endl;                
        }
        else{
            cin.clear();

            char c;
            cin>>c;
            if(c=='|')
                break;
        }
    }
}

