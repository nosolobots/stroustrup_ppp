/*
    Section 4 Exercise 4.
    Write a program to play a numbers guessing game. The user thinks of a number 
    between 1 and 100 and your program asks questions to figure out what the number 
    is (e.g., “Is the number you are thinking of less than 50?”). Your program should 
    be able to identify the number after asking no more than seven questions. 
    Hint: Use the < and <= operators and the if-else construct.
*/

#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int guess, upper_limit = 100, lower_limit = 0, n_guesses = 0;
    bool guessed = false, lt = false;

    const char yes = 'y';
    const char no = 'n';

    while(n_guesses<8) {
        guess = lower_limit + (upper_limit - lower_limit)/2;
        if(guess == lower_limit || guess == upper_limit) {
            guess = lt? lower_limit: upper_limit;
            guessed = true;
            break;
        }

        n_guesses++;

        if(n_guesses <= 7) { 
            cout << "Is the number you are thinking of less than " << guess << endl;
        
            char c;
            do { cin >> c;
            }while(c!=yes && c!=no);
    
            if(c==yes) { 
                upper_limit = guess; 
                lt = true;
            }
            else { 
                lower_limit = guess; 
                lt = false;
            }
        }
    }

    if(guessed) {
        cout << "The number you thought is " << guess << endl;
    }
    else {
        cout << "Dammit! I run out of guesses" << endl;
    }

    return EXIT_SUCCESS;
}