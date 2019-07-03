/*
    Section 4 Exercise 20.
    
    Modify the program from exercise 19 so that when you enter a name, the 
    program will output the corresponding score or name not found.
*/    

#include<iostream>
#include<cstdlib>

int find(std::vector<std::string> &v, const std::string &n) {
    int ret = -1;
    for(int i=0; i<v.size(); i++) {
        if(v[i]==n) {
            ret = i;
            break;
        }
    }
    return ret;
}

int main() {
    std::string name;
    int score;
    bool err = false;

    std::vector<std::string> names;
    std::vector<int> scores;

    std::cout<<"Enter name score pairs:"<<std::endl;

    while(std::cin>>name>>score) {
        if(name=="NoName" && !score) {
            break;
        }
        else if(find(names, name) != -1) {
            err = true;
            break;        
        }
        else {
            names.push_back(name);
            scores.push_back(score);
        }
    }

    if(err) {
        std::cout<<"Repeated name"<<std::endl;
    }
    else {
        std::cout<<"Enter a name: ";
        std::cin>>name;

        int p;
        if((p = find(names, name)) != -1) {
            std::cout<<scores[p]<<std::endl;
        }
        else{
            std::cout<<"name not found"<<std::endl;
        }
    }

    return EXIT_SUCCESS;
}