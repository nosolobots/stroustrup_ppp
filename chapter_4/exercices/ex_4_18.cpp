/*
    Section 4 Exercise 18.
    Write a program to solve quadratic equations. A quadratic equation is of the form

                    ax² + bx + c = 0

    If you don’t know the quadratic formula for solving such an expression, do some 
    research. Remember, researching how to solve a problem is often necessary before 
    a programmer can teach the computer how to solve it. Use doubles for the 
    user inputs for a, b, and c. Since there are two solutions to a quadratic equation, 
    output both x1 and x2.
*/

#include<iostream>
#include<math.h>

int main() {
    std::string line;
    double a, b, c, d;

    std::cout << "Coefficient a: ";
    while(!(std::cin>>a)) {
        std::cin.clear();
        std::getline(std::cin, line);
    }

    std::cout << "Coefficient b: ";
    while(!(std::cin>>b)) {
        std::cin.clear();
        std::getline(std::cin, line);
    }

    std::cout << "Coefficient c: ";
    while(!(std::cin>>c)) {
        std::cin.clear();
        std::getline(std::cin, line);
    }

    std::cout << "Solving: " << a << "·x² + " << b << "·x + " << c << " = 0" << std::endl;

    if(a==0 && b==0) {
        std::cout << "No solution" << std::endl;
    }
    else if(a==0) {
        std::cout << "x = " << -c/b << std::endl;
    }
    else {
        d = pow(b,2) - 4*a*c;
        if(d<0) {
            std::cout << "No real solutions" << std::endl;
        }
        else {
            std::cout << "x1 = " << (-b + sqrt(d))/(2*a) << std::endl;
            std::cout << "x2 = " << (-b - sqrt(d))/(2*a) << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
