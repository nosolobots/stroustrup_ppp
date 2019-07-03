/*
    Section 4 Exercise 10. 
    Write a program that plays the game “Rock, Paper, Scissors.” If you are not
    familiar with the game do some research (e.g., on the web using Google). 
    Research is a common task for programmers. Use a switch-statement to solve 
    this exercise. Also, the machine should give random answers (i.e., select 
    the next rock, paper, or scissors randomly). Real randomness is too hard to
    provide just now, so just build a vector with a sequence of values to be 
    used as “the next value.” If you build the vector into the program, it will
    always play the same game, so maybe you should let the user enter some 
    values. Try variations to make it less easy for the user to guess which move
    the machine will make next.
*/

#include<iostream>
#include<cstdlib>
#include<time.h>
#include<vector>

void game_round(const char &u, const std::vector<std::string> &v) {
    int i = rand()%3;
    std::string comp = v.at(i);
    std::cout<<"I play "<<comp<<std::endl;
    
    int winner = 0;
    char c = comp[0];

    if(u!=c) {
        switch (c)
        {
        case 'R':
            winner = (u=='P')?1:-1;
            break;
        case 'P':
            winner = (u=='S')?1:-1;
            break;            
        case 'S':
            winner = (u=='R')?1:-1;
            break;    
        }
    }

    if(!winner) {
        std::cout<<"Tie!";
    }
    else {
        winner==1?std::cout<<"You win!":std::cout<<"I win!";
    }

    std::cout<<std::endl;
}

int main() {
    std::vector<std::string> v;
    v.push_back("Rock"); 
    v.push_back("Paper");
    v.push_back("Scissors");

    std::string user_input;

    // initialize random seed
    std::srand(time(NULL));

    bool in_game = true;

    while(in_game) {
        std::cout<<"[R]ock, [P]aper, [S]cissors? (E)xit"<<std::endl;
        std::cin>>user_input;

        switch (user_input[0])
        {
        case 'R':
        case 'P':
        case 'S':
            game_round(user_input[0], v);
            break;
        case 'E':
            std::cout<<"bye!"<<std::endl;
            in_game = false;
            break;
        default:
            std::cout<<"Input not valid!"<<std::endl;
        }

    }

    return EXIT_SUCCESS;
}