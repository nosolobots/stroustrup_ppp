/*
Section 4 Drill step 5.
5. Change the program so that it writes out the numbers are almost equal after writing
   out which is the larger and the smaller if the two numbers differ by less than 1.0 / 100.
*/

#include "std_lib_facilities.h"

main()
{
    constexpr char fin = '|';

    double a, b;
    
    while(true) {
        if(cin>>a>>b) {
            if(a==b){
                cout<<"the numbers are equal"<<endl;    
            }
            else {
                double smaller, larger;
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
                if((larger-smaller)<(1.0/100))              
                    cout<<"the numbers are almost equal"<<endl;
            }
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

