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

/*The code below was the code input into the Coding Ground Compiler. In the Int main portion, the function 
is being called 11 times to execute the 11 math operations*/

#include <stdio.h>
int answer = 0; //initializes the function

int math(int num1, int num2, char operator); //math function created
int main(void)//Main code
{
    /*The numbers 6 and 3 are picked as num1 and num2, respectively.
    Each operand was put to the test with the same numbers*/
        
        math(6,3, '+');//Addition
        printf("answer = %d \n", answer);//Printf is the way to display the output onscreen. Specifically, %d outputs an integer.
        
        math(6,3, '-');//Subtraction
        printf("answer = %d \n", answer);
        
        math(6,3, '*');//Multiplication
        printf("answer = %d \n", answer);
        
        math(6,3, '/');//Division
        printf("answer = %d \n", answer);
        
        math(6,3, '%');//Modulus
        printf("answer = %d \n", answer);
        
        math(6,3, '&');//Bitwise AND
        printf("answer = %d \n", answer);
        
        math(6,3, '|');//Bitwise OR
        printf("answer = %d \n", answer);
        
        math(6,3, '^');//Bitwise XOR
        printf("answer = %d \n", answer);
        
        math(6,3, '~');//Bitwise Negation
        printf("answer = %d \n", answer);
        
        math(6,3, '>');//Right Shift
        printf("answer = %d \n", answer);
        
        math(6,3, '<');//Left Shift
        printf("answer = %d \n", answer);
} 

//Here were the answers once the program was executed
$gcc -o main *.c
$main
answer = 9 //(6+3)
answer = 3 //(6-3)
answer = 18 //(6*3)
answer = 2 //(6/3)
answer = 0 //(6%3)
answer = 2 //(6&3)
answer = 7 //(6|3)
answer = 5 //(6^3)
answer = -7 //(Negation)
answer = 0 //(6>>3)
answer = 48 //(6<<3)
 
