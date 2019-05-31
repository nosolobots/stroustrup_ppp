/*
Section 4 Drill step 6.
6. Now change the body of the loop so that it reads just one double each time around. 
   Define two variables to keep track of which is the smallest and which is the largest 
   value you have seen so far. Each time through the loop write out the value entered. 
   If it’s the smallest so far, write the smallest so far after the number. 
   If it is the largest so far, write the largest so far after the number.
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    double min, max, val;

    const char fin = '|';

    bool first_val = true;

    while(true) {
        if(cin>>val) {
            if(first_val) {
                min = val;
                max = val;
                first_val = false;
            }
            else {
                if(val<min) {
                    min = val;
                    cout<<"the smallest so far\n";
                }
                else if(val>max) {
                    max = val;
                    cout<<"the largest so far\n";
                }
            }
        }
        else {
            cin.clear();

            char c;
            cin>>c;
            if(c==fin){
                break;
            }
        }
    }

    return EXIT_SUCCESS;
}