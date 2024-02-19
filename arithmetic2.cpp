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

Task B builds upon the code from Task A. Submit the source code as arithmetic2.cpp.
1. Enter the number of questions to answer. Ensure that the input is a positive integer. Continue
prompting users with “The number of questions cannot be zero or negative. Re-enter: ” and accept
input from users until a positive integer is provided.
2. Utilize the code from Task A to generate questions involving addition (+), subtraction (-), multiplication (*), division (/), and remainder (%), with operands restricted to single-digit integers.
3. Calculate and print the correctness percentage.
4. If the percentage is 90 or higher, print ’A’; if it’s 80 or higher, print ’B’; if it’s 70 or higher, print ’C’;
if it’s 60 or higher, print ’D’; otherwise, print ’F’.

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
    double right = 0;
    int questions;
    double calculation;
    char operators[5] = {'+', '-', '*', '/','%'};
    srand(time(NULL));
    
    cout << "Enter the total number of questions to ask: ";
    cin >> questions;
    cout << endl;
    while(questions <= 0){
        cout << "The number of questions cannot be zero or negative. Re-enter: ";
        cin >> questions;
        cout << endl;
    }
    for(int i = 0; i < questions; i++){
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
    cout << "what is " << firstOp << " " << cOperator << " " << secondOp << "? ";
    cin >> input;
    if(input == result){
        right++;
        cout << "true" << endl;
        
    } else {
        cout << "false" << endl;
    }
    }
    calculation = (right / questions) * 100;
    
    cout << "percentage correct: " << calculation << "%" << endl;
    if(calculation >= 90){
        cout << "letter grade: A";
    } else if(calculation >= 80 && calculation < 90){
        cout << "letter grade: B";
    } else if(calculation >= 70 && calculation < 80){
        cout << "letter grade: C";
    } else if(calculation >= 60 && calculation < 70){
        cout << "letter grade: D";
    } else if(calculation < 60){
        cout << "letter grade: F";
    }
    return 0;
}

