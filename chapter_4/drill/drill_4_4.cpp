/*
Section 4 Drill step 4.
4. Change the program so it uses doubles instead of ints.
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

