/*
    Section 4 Exercise 17.
    Write a program that finds the min, max, and mode of a sequence of strings.
*/

/*
    [ version without iterators and <algorithm> ]
*/

#include<cstdlib>
#include<iostream>
#include<vector>

int find(std::vector<std::string> &v, const std::string &s, const int &i) {
    int r = -1, p;
    for(p=i;p<v.size();p++) {
        if(s == v[p]) {
            r = p;
            break;
        }
    }

    return r;
}

int num_occur(std::vector<std::string> &v, const std::string &s) {
    int r = 0, p;
    
    for(p=0;p<v.size();p++) {
        if(s == v[p]) { ++r; }
    }

    return r;
}

std::string mode(std::vector<std::string> &v) { 
    std::vector<std::string> prev;
    int max=0, count;
    std::string r = "";

    for(std::string s:v) {
        if(!prev.size() || find(prev, s, 0)!=-1) {
            prev.push_back(s);
            if((count = num_occur(prev, s))>max) {
                max = count;
                r = s;
            }
        }
    }

    return r;
}

int main(){
    const char fin = '|';
    std::vector<std::string> data;
    std::string s, min="", max="", smode;

    std::cout << "Type some strings (| to finalize):" << std::endl;

    while(std::cin>>s) {
        if(s[0] == fin) {
            break;
        }
        else {
            data.push_back(s);
            if(min=="" && max=="") {
                min = s;
                max = s;
            }
            else if(s<min) { min = s; }
            else if(s>max) { max = s; }
        }
    }

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;
    smode = mode(data);
    std::cout << "Mode: " << smode << std::endl;

    return EXIT_SUCCESS;
}