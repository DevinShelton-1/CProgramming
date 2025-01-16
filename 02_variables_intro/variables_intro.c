// Intro to varibles in C

//Preprocessor Directive
#include <stdio.h>

// Main Function
int main() {
    // Create a Varibale
    int first_number;
    // Assign the Value to first_number
    first_number = 1;

    // Create & Initialize
    int second_number = -15;
    
    // Create Arithmetic Variable
    int sum = first_number + second_number;
    int difference = first_number - second_number;
    int product = first_number * second_number;

    // Print the Values
    // %d - conversion specifier
    printf("the first number is %d\n", first_number);
    printf("the second number is %d\n", second_number);
    printf("the sum of the 2 numbers is %d\n", sum);
    printf("in other words,\n");
    printf("%d + %d = %d\n", first_number, second_number, sum);


    return 0;
}