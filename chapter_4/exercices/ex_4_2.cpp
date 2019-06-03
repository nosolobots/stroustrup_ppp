/*
    Section 4 Exercise 2.
    If we define the median of a sequence as “a number so that exactly as many elements 
    come before it in the sequence as come after it,” fix the program in §4.6.3 so that 
    it always prints out a median. Hint: A median need not be an element of the sequence
*/

#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<double> temps;

    // Add data and calculate mean
    cout<<"Give me some double values:"<<endl;
    double mean = 0;
    for(double t; cin>>t; ) {
        temps.push_back(t);
        mean += t;
    }
    mean /= temps.size();

    // Calculate median
    sort(temps.begin(), temps.end());
    double median;
    int i = temps.size()/2;
    if(temps.size()%2) {
        median = temps[i];
    }
    else {
        median = temps[i-1] + (temps[i]-temps[i-1])/2.0;        
    }

    cout<<"Values: [ ";
    for(double v:temps) {
        cout<<v<<" ";
    }
    cout<<"]"<<endl;

    cout<<"mean: "<<mean<<endl<<"median: "<<median<<endl;

    return EXIT_SUCCESS;
}