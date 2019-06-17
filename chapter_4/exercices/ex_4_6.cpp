/*
    Section 4 Exercise 6. 
    Make a vector holding the ten string values "zero", "one", . . . "nine". 
    Use that in a program that converts a digit to its corresponding spelled-out
    value; e.g., the input 7 gives the output seven. Have the same program, 
    using the same input loop, convert spelled-out numbers into their digit 
    form; e.g., the input seven gives the output 7.
*/

#include<iostream>
#include<cstdlib>
#include<vector>

using namespace std;

int findInVector(const vector<string> &vec, const string &ele) {
    int res = -1, i=0;

    for(int i=0; i<vec.size(); i++) {
        if(vec[i]==ele) { 
            res = i;
            break; 
        }
    }

    return res;
}

int main() {
    vector<string> nums = { "zero", "one", "two", "three", "four", 
                            "five", "six", "seven", "eight", "nine" };

    string in;

    cout<<"Give me a digit (numeric or spelled):"<<endl;

    while(true) {
        cin>>in;
        char c = in[0];
        if(c >= '0' && c <= '9') {
            cout << nums[(int)(c-'0')] << endl;
        }
        else{
            int i = findInVector(nums, in);
            if(i!=-1) cout << i << endl;
        }
    }

    return EXIT_SUCCESS;
}