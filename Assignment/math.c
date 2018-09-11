#include <stdio.h>//The standard input output library in C
#include <math.h> //includes the math function so that certain operations are recognized and can be used

//For the function below, math is used to pass in an integer.
//Num1 and Num2 are integer inputs
//char operator is the operand input used as a character
int math(int num1, int num2, char operator){
    switch(operator) //How the operand will be switched without having to use a different function for each operation
    {
    case '+'://11 different cases for each operation, Addition
        answer = num1 + num2;
        return answer;
        break;

    case '-'//Subtraction
        answer = num1 - num2;
        return answer;
        break;

    case '*'://Multiplication
        answer = num1 * num2;
        return answer;
        break;

    case '/'://Division
        answer = num1/num2;
        return answer;
        break;

    case '%'://Modulus
        answer = num1%num2;
        return answer;
        break;

    case '<'://Left Shift
        answer = num1 << num2
        return answer;
        break;

    case '>'://Right Shift
        answer = num1 >> num2;
        return answer;
        break;

    case '&'://Bitwise AND
        answer = num1 & num2;
        return answer;
        break;

    case '|'://Bitwise OR
        answer = num1 | num2;
        return answer;
        break;

    case '^'://Bitwise XOR
        answer = num1 ^ num2;
        return answer;
        break;

    case '~'://Bitwise Negation
        answer = ~num1
        return answer;
        break;
    }
}
