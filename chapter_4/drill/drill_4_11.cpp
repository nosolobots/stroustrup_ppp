/*
Section 4 Drill step 11.
11. Before writing out the values from the vector, sort them 
    (that’ll make them come out in increasing order)
*/

#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    const char fin = '|';
    double num;
    string unit;
    vector<double> values;
    
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

            values.push_back(num);            
        }
        else {
            cin.clear();
            
            char c; cin>>c;
            if(c == fin) {
                break;
            }
        }
    }

    sort(values.begin(), values.end());   // Standard sort
    cout<<"Ordered values (m):"<<endl;
    for(double n:values)
        cout<<n<<" ";
    cout<<endl;

    return EXIT_SUCCESS;
}