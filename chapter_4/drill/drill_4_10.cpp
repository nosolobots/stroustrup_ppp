/*
Section 4 Drill step 10.
10. Keep all the values entered (converted into meters) in a vector. At the end, write out those values.
*/

#include<iostream>
#include<cstdlib>
#include<vector>

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

    cout<<"Values (m):"<<endl;
    for(double n:values)
        cout<<n<<" ";
    cout<<endl;

    return EXIT_SUCCESS;
}