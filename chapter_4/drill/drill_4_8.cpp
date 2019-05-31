/*
Section 4 Drill step 8.
8. Reject values without units or with “illegal” representations of units, such as y, yard, meter, 
   km, and gallons.
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    const char fin = '|';
    string unit;
    double num;
    
    while(true) {
        if(cin>>num>>unit) {
            if(unit == "m") 
                cout<<num<<"m are "<<num*100<<"cm\n";
            else if(unit == "in")
                cout<<num<<"in are "<<num*2.54<<"cm\n";
            else if(unit == "ft")
                cout<<num<<"ft are "<<num*12<<"in\n";
            else if(unit == "cm")
                cout<<num<<"cm are "<<num/100<<"m\n";
            else
                cout<<"illegal value\n";            
        }
        else {
            cin.clear();
            
            char c;
            cin>>c;
            if(c == fin) {
                break;
            }
        }
    }

    return EXIT_SUCCESS;
}