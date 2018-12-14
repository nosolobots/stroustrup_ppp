/*
Section 4 Drill step 2.
Change the program to write out the smaller value is: followed by the smaller of the
numbers and the larger value is: followed by the larger value.
*/

#include "std_lib_facilities.h"

main()
{
    constexpr char fin = '|';

    int a, b;
    
    while(true) {
        if(cin>>a>>b) {
            int smaller, larger;
            if(a<b){ 
                smaller=a; 
                larger=b; 
            }
            else{ 
                smaller=b; 
                larger=a; 
            };
            cout<<"the smaller value is "<<smaller<<endl;                
            cout<<"the larger value is "<<larger<<endl;                
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

