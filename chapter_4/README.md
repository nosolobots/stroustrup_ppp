## Chapter 4 · COMPUTATION


### Drill

1. Write a program that consists of a while-loop that (each time around the loop)
   reads in two INTs and then prints them. Exit the program when a terminating '|' is entered.

2. Change the program to write out the smaller value is: followed by the smaller of the
   numbers and the larger value is: followed by the larger value.

3. Augment the program so that it writes the line the numbers are equal (only) if they are equal.

4. Change the program so it uses doubles instead of ints.

5. Change the program so that it writes out the numbers are almost equal after writing
   out which is the larger and the smaller if the two numbers differ by less than 1.0 / 100.
   
6. Now change the body of the loop so that it reads just one double each time around. 
   Define two variables to keep track of which is the smallest and which is the largest value you 
   have seen so far. Each time through the loop write out the value entered. If it’s the smallest 
   so far, write the smallest so far after the number. If it is the largest so far, write the 
   largest so far after the number.
   
7. Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft, or 3.33m. 
   Accept the four units: cm, m, in, ft. Assume conversion factors 1m == 100cm, 1in == 2.54cm, 
   1ft == 12in. Read the unit indicator into a string. You may consider 12 m (with a space between 
   the number and the unit) equivalent to 12m (without a space).

8. Reject values without units or with “illegal” representations of units, such as y, yard, meter, 
   km, and gallons.

9. Keep track of the sum of values entered (as well as the smallest and the largest) and the number 
   of values entered. When the loop ends, print the smallest, the largest, the number of values, and 
   the sum of values. Note that to keep the sum, you have to decide on a unit to use for that sum; 
   use meters.

10. Keep all the values entered (converted into meters) in a vector. At the end, write out those values.

11. Before writing out the values from the vector, sort them (that’ll make them come out in increasing order).


### Exercises

2. If we define the median of a sequence as “a number so that exactly as many elements come before it in the sequence as
   come after it,” fix the program in §4.6.3 so that it always prints out a median. 
   Hint: A median need not be an element of the sequence
   
3. Read a sequence of double values into a vector. Think of each value as the distance between two cities along a given
   route. Compute and print the total distance (the sum of all distances). Find and print the smallest and greatest 
   distance between two neighboring cities. Find and print the mean distance between two neighboring cities.

4. Write a program to play a numbers guessing game. The user thinks of a number between 1 and 100 and your program
   asks questions to figure out what the number is (e.g., “Is the number you are thinking of less than 50?”). Your program
   should be able to identify the number after asking no more than seven questions. Hint: Use the < and <= operators and 
   the if-else construct.
   
5. Write a program that performs as a very simple calculator. Your calculator should be able to handle the four basic math
   operations — add, subtract, multiply, and divide — on two input values. Your program should prompt the user to enter
   three arguments: two double values and a character to represent an operation. If the entry arguments are 35.6, 24.1, and
   '+', the program output should be `The sum of 35.6 and 24.1 is 59.7`.

6. Make a vector holding the ten string values "zero", "one", . . . "nine". Use that in a program that converts a digit to
   its corresponding spelled-out value; e.g., the input 7 gives the output seven. Have the same program, using the same
   input loop, convert spelled-out numbers into their digit form; e.g., the input seven gives the output 7.
   
7. Modify the “mini calculator” from exercise 5 to accept (just) single-digit numbers written as either digits or spelled
   out.
   
8. There is an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor to name
   his reward. The inventor asked for one grain of rice for the first square, 2 for the second, 4 for the third, and so on,
   doubling for each of the 64 squares. That may sound modest, but there wasn’t that much rice in the empire! Write a
   program to calculate how many squares are required to give the inventor at least 1000 grains of rice, at least 1,000,000
   grains, and at least 1,000,000,000 grains. You’ll need a loop, of course, and probably an int to keep track of which
   square you are at, an int to keep the number of grains on the current square, and an int to keep track of the grains on
   all previous squares. We suggest that you write out the value of all your variables for each iteration of the loop so that
   you can see what’s going on.





   
  


