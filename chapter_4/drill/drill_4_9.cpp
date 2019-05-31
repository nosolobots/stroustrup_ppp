/*
Section 4 Drill step 9.
9. Keep track of the sum of values entered (as well as the smallest and the largest) and 
   the number of values entered. When the loop ends, print the smallest, the largest, the 
   number of values, and the sum of values. Note that to keep the sum, you have to decide 
   on a unit to use for that sum; use meters.
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    const char fin = '|';
    string unit;
    double num, min=0, max=0, sum=0, cont=0;
    
    while(true) {
        if(cin>>num>>unit) {
            if(unit == "in")
                num *= 2.54/100;
            else if(unit == "ft")
                num *= 12*2.54/100;
            else if(unit == "cm")
                num /= 100;
            else if(unit != "m") {
                cout<<"illegal unit\n";            
                continue;
            }

            if(!cont) {
                min = num; 
                max = num;
            }
            else {
                if(num<min) 
                    min = num;
                if(num>max) 
                    max = num;
            }

            cont++;
            sum += num;            
        }
        else {
            cin.clear();
            
            char c; cin>>c;
            if(c == fin) {
                break;
            }
        }
    }

    cout<<"Total values: "<<cont<<endl;
    cout<<"Min value (m): "<<min<<endl;
    cout<<"Max value (m): "<<max<<endl;
    cout<<"Sum (m): "<<sum<<endl;

    return EXIT_SUCCESS;
}