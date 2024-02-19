/*
Write a C++ main function to accomplish the following tasks and name the source code arithmetic.cpp.
1. Select an operator randomly from addition ('+'), subtraction ('-'), multiplication ('*'), division ('/'),
and remainder ('%').
Hint: You can create an array of characters (type char in C++) with elements '+', '-', '*', '/', and
'%'. Generate a random integer to represent a valid index in this array. Retrieve the operator located
at the chosen index in the array.
Warning: To ensure accurate grading in Gradescope, save operators in the order of '+', '-', '*', '/',
and '%'. If the chosen operator differs from the grading script’s expectation, you may not receive
credits for your work.
2. Generate the first operand as a single-digit integer, that is, an integer in the range [0, 9].
3. If the operator is either division or remainder, generate the second operand as a non-zero single-digit
integer, that is, an integer in the range [1, 9], otherwise, generate the second operand as a single-digit
integer in the range [0, 9].
4. Perform the operation on the operands based on the chosen operator and save the result.
5. Prompt the user with the problem, receive a reply from the user. If the reply is correct, print “true”;
otherwise, print “false
*/

#include <iostream>
#include <cstdlib> //rand
#include <string>
#include <ctime>
using namespace std;

int main(){ 
    int result;
    int secondOp;
    int input;
    char operators[5] = {'+', '-', '*', '/','%'};
    srand(time(NULL));
    int randomNumOp = rand() % 5;
    char cOperator = operators[randomNumOp];
    int firstOp = rand() % 10;
    if(cOperator == '/' || cOperator == '%'){
       secondOp = (rand() % 9) + 1; // Remove int before secondOp
    } else {
        secondOp = rand() % 10; // Remove int before secondOp
    }
    if(cOperator == '+'){
        result = firstOp + secondOp;
    }else if(cOperator == '-'){
        result = firstOp - secondOp;
    }else if(cOperator == '*'){
        result = firstOp * secondOp;
    }else if(cOperator == '/'){
        result = firstOp / secondOp;
    }else if(cOperator == '%'){
        result = firstOp % secondOp;
    }
    cout << "what is " << firstOp << " " << cOperator << " " << secondOp << "?";
    cin >> input;
    if(input == result){
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
