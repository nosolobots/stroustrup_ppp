/*
Section 4 Drill step 3.
3. Augment the program so that it writes the line the numbers are equal (only) if they are equal.
*/

#include "std_lib_facilities.h"

main()
{
    constexpr char fin = '|';

    int a, b;
    
    while(true) {
        if(cin>>a>>b) {
            if(a==b){
                cout<<"the numbers are equal"<<endl;    
            }
            else {
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

