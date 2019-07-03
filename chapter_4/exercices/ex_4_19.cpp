/*
    Section 4 Exercise 19.
    
    Write a program where you first enter a set of name-and-value pairs, such as
    Joe 17 and Barbara 22. For each pair, add the name to a vector called names 
    and the number to a vector called scores (in corresponding positions, so that
    if names[7]=="Joe" then scores[7]==17). Terminate input with NoName 0. Check 
    that each name is unique and terminate with an error message if a name is 
    entered twice. Write out all the (name,score) pairs, one per line.
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
        std::cout<<"Scores:"<<std::endl;
        for(int i=0; i<names.size(); i++){
            std::cout<<"( "<<names[i]<<", "<<scores[i]<<" )"<<std::endl;
        }
    }

    return EXIT_SUCCESS;
}