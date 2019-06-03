/*
    Section 4 Exercise 3.
    Read a sequence of double values into a vector. Think of each value as the distance 
    between two cities along a given route. Compute and print the total distance 
    (the sum of all distances). Find and print the smallest and greatest distance between 
    two neighboring cities. Find and print the mean distance between two neighboring cities.
*/

#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<double> distances;

    // Get distances
    cout<<"Give me the distances between the cities along the road:"<<endl;
    for(double d; cin>>d;) {
        distances.push_back(d);
    }

    if(distances.size()<1) {
        cout<<"Sorry. I need more data"<<endl;
        return EXIT_FAILURE;
    }

    // Sorting the distances
    sort(distances.begin(), distances.end());
    double min = distances[0];
    double max = distances[distances.size()-1];
    double mean = 0;
    for(double d:distances) { mean += d; }
    mean /= distances.size();

    // Show results
    cout<<"Smallest: "<<min<<endl;
    cout<<"Greatest: "<<max<<endl;
    cout<<"Mean: "<<mean<<endl;

    return EXIT_SUCCESS;
}