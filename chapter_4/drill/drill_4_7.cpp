/*
Section 4 Drill step 7.
7. Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m. 
   Accept the four units: cm, m, in, ft. Assume conversion factors 1m == 100cm, 1in == 2.54cm, 
   1ft == 12in. Read the unit indicator into a string. You may consider 12 m (with a space between 
   the number and the unit) equivalent to 12m (without a space).
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