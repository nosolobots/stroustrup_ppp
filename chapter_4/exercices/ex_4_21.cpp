/*
    Section 4 Exercise 21.
    
    Modify the program from exercise 19 so that when you enter an integer, the 
    program will output all the names with that score or score not found
*/    

#include<iostream>
#include<cstdlib>

template<class T>
int find(const std::vector<T> &v, const T &n, const int &pos) {
    int ret = -1;
    for(int i=pos; i<v.size(); i++) {
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
        else if(find(names, name, 0) != -1) {
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
        std::cout<<"Enter a score: ";
        std::cin>>score;

        int p=-1;
        bool f=false;
        do {
            p = find(scores, score, p+1);
            if(p != -1) { 
                f = true; 
                std::cout<<names[p]<<std::endl;
            }        
        } while(p!=-1);
        
        if(!f) {
            std::cout<<"score not found"<<std::endl;
        }
    }

    return EXIT_SUCCESS;
}