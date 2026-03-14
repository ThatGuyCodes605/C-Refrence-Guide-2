#include <stdio.h> //standard input/output library, which provides functions for reading and writing data to the console and files
#include <cs50.h> //CS50 library, which provides additional functions for working with strings, files, and other data types
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int get_n(void); //function prototype for the function "get_n", which will be defined later in the code. This allows us to call the function "get_n" from the main function before its actual definition, which can improve code organization and readability.
double average(int n, int scores[]); //function prototype for the function "average", which will be defined later in the code. This allows us to call the function "average" from the main function before its actual definition, which can improve code organization and readability.
void meow(int n) {
    //this is a function declaration for a function called "meow" that takes no parameters and returns void (no value). The function body is defined within the curly braces {} and contains the code that will be executed when the function is called. In this case, it simply prints "Meow!" to the console.
    for (int i = 0; i < n; i++) { //this is a for loop that will execute the block of code inside the curly braces {} a specific number of times. In this case, it will initialize "i" to 0, check if "i < n" is true, and if so, it will execute the block of code and then increment "i" by 1. This process will repeat until "i" is no longer less than "n".
         printf("Meow!\n"); //this prints "Meow!" to the console followed by a newline character, and it will be printed "n" times because of the for loop.
    }
} //it is better do use a function prototype then whatever this is for example, you can declare the function prototype at the top of the file like this: void meow(void); and then define the function body later in the file. This way, you can call the function "meow" from anywhere in the file without having to worry about the order of the function definitions.
void hello(void);
void draw_iteration(int n);
void draw_recursive(int n);
void badswap(int a, int b);
void pointerswap(int* a, int* b);
int main(int argc, char* argv[]) {
    //if for some reason you want to compile this program run "make" in the terminal, and then run "./CS50" to execute the compiled program. This will allow you to see the output of the program and interact with it as needed.
    //======== WEEK 1 ========
    //======== C BASICS ========
    printf("hello, world\n"); //prints "hello, world" to the console
    printf("hello, world"); //prints "hello, world" to the console without a newline character at the end
    char name[100]; //declares a character array (string) called "name" with a maximum length of 100 characters
    printf("\n"); //prints a newline character to the console, which moves the cursor to the next line
    printf("enter your name: \n");
    fgets(name, sizeof(name), stdin); //reads a string from the user and stores it in the variable "name". The maximum length of the string is 100 characters, and it is read from the standard input (stdin).
    //it is bad practice to use <cs50.h> in a program that is not part of the CS50 course, as it may not be available on other systems and can lead to compatibility issues. It is better to use standard C libraries and functions for input and output operations.
    //for example instead of using get_string, you can use fgets to read a string from the user and store it in a character array, as shown in the previous example. This approach is more portable and does not rely on external libraries.
    //another example is instead of using "string hello = get_string("hello, world\n");" you can use "char hello[100]; printf("hello, world\n"); fgets(hello, sizeof(hello), stdin);" to achieve the same result without using the CS50 library.
    //Additionally, using <cs50.h> can make your code less readable and harder to understand for other programmers who may not be familiar with the CS50 library. It is always best to use standard C libraries and functions to ensure that your code is portable and easy to understand.
    //In summary, while the CS50 library can be useful for learning and practicing programming concepts, it is not recommended for use in production code or in programs that are not part of the CS50 course. It is better to use standard C libraries and functions for input and output operations to ensure compatibility and readability of your code.
    //from now on I will tell you if I'm using the CS50 library or not, so you can adjust your code accordingly.
    string answer = get_string("What is your name? "); // this is from cs50.h prompts the user to enter their name and returns the input as a string. The function get_string is part of the CS50 library and is used to read a string from the user.
    printf("your name: %s\n", name);
    printf("your name: %s\n", answer);
    printf("Hello, answer"); //wrong becasue it will print "Hello, answer" instead of "Hello, [name]" because the variable "answer" is not being used in the printf statement. To fix this, you can use the format specifier %s to include the value of the variable "answer" in the output string, like this: printf("Hello, %s\n", answer); This will print "Hello, [name]" where [name] is the value entered by the user.
    //some useful linux commands:
    //ls - lists the files in the current directory
    //cd - changes the current directory
    //mkdir - creates a new directory
    //rm - removes a file or directory
    //rmdir - removes an empty directory
    //cp - copies a file or directory
    //mv - moves or renames a file or directory
    //======== IF STATEMENTS ========
    int x = 5;
    int y = 10;
    if (x < y) {
        printf("x is less than y\n");
    }
    else if (x > y) {
        printf("x is greater than y\n");
    }
    else {
        printf("x is equal to y\n");
    }
    //some examples of operators are:
    // = (assignment)
    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulo)
    // == (equal to)
    // != (not equal to)
    // > (greater than)
    // < (less than)
    // >= (greater than or equal to)
    // <= (less than or equal to)
    // += (addition assignment)
    // -= (subtraction assignment)
    // *= (multiplication assignment)
    // /= (division assignment)
    // %= (modulo assignment)
    // && (logical AND)
    // || (logical OR)
    // ! (logical NOT)
    //some examples of data types are:
    // int - integer (whole number)
    // float - floating-point number (decimal)
    // double - double-precision floating-point number (decimal with more precision)
    // char - character (single letter or symbol)
    // string - string of characters (text)
    // long - long integer (whole number with a larger range than int)
    // bool - boolean (true or false)
    //some examples stuff in cs50.h are:
    // get_string - prompts the user to enter a string and returns it as a string
    // get_int - prompts the user to enter an integer and returns it as an int
    // get_float - prompts the user to enter a floating-point number and returns it as a float
    // get_double - prompts the user to enter a double-precision floating-point number and returns it as a double
    // get_char - prompts the user to enter a character and returns it as a char
    // get_long - prompts the user to enter a long integer and returns it as a long
    //some examples of format codes are:
    // %d - integer
    // %f - floating-point number
    // %lf - double-precision floating-point number
    // %c - character
    // %s - string
    // %ld - long integer
    // %p - pointer
    // %x - hexadecimal integer
    // %o - octal integer
    // %e - scientific notation
    // %g - shortest representation of %f or %e
    // %a - hexadecimal floating-point number
    // %n - number of characters written so far
    // %u - unsigned integer
    // %i - integer (same as %d)
    // %li - long integer (same as %ld)
    // %lu - unsigned long integer
    // %zu - size_t (unsigned integer type used for sizes)
    // %zd - ssize_t (signed integer type used for sizes)
    // %t - ptrdiff_t (signed integer type used for pointer differences)
    // %j - intmax_t (signed integer type capable of holding any integer type)
    // %z - uintmax_t (unsigned integer type capable of holding any integer type)
    //======== VARIABLES ========
    int a = 5; //declares an integer variable called "a" and initializes it with the value 5
    float b = 3.14; //declares a floating-point variable called "b" and initializes it with the value 3.14
    char c = 'A'; //declares a character variable called "c" and initializes it with the value 'A'
    double d = 3.141592653589793; //declares a double-precision floating-point variable called "d" and initializes it with the value 3.141592653589793
    char* e = "Hello, world!"; //declares a string variable called "e" and initializes it with the value "Hello, world!"
    int counter = 0; //declares an integer variable called "counter" and initializes it with the value 0
    counter++; //increments the value of "counter" by 1
    x = get_int("whats x? "); //prompts the user to enter an integer and stores it in the preexisting variable "x"
    y = get_int("whats y? "); //prompts the user to enter an integer and stores it in the preexisting variable "y"
    if (x < y) { //this is an if statement that checks if the value of "x" is less than the value of "y". If this condition is true, it will execute the block of code inside the curly braces {} and print "x is less than y" to the console. If the condition is false, it will skip this block of code and check the next condition in the else if statement.
        printf("x is less than y\n"); //this prints "x is less than y" to the console if the condition "x < y" is true
    }
    else if (x > y) { //this is an else if statement that checks if the value of "x" is greater than the value of "y". This block of code will only be executed if the previous condition "x < y" was false. If this condition is true, it will execute the block of code inside the curly braces {} and print "x is greater than y" to the console. If this condition is also false, it will skip this block of code and execute the block of code inside the else statement.
        printf("x is greater than y\n"); //this prints "x is greater than y" to the console if the condition "x > y" is true
    }
    else { //this is an else statement that will be executed if both of the previous conditions "x < y" and "x > y" were false. This means that the value of "x" is equal to the value of "y". It will execute the block of code inside the curly braces {} and print "x is equal to y" to the console.
        printf("x is equal to y\n"); //this prints "x is equal to y" to the console if both conditions "x < y" and "x > y" are false, which means that "x" is equal to "y"
    }
    //here's a bad example of an if statement:
    if (x < y) { //this is an if statement that checks if the value of "x" is less than the value of "y". If this condition is true, it will execute the block of code inside the curly braces {} and print "x is less than y" to the console. However, if this condition is false, it will still check the next two conditions "x > y" and "x == y", which is inefficient because it will check all three conditions even if the first one is true.
        printf("x is less than y\n"); //this prints "x is less than y" to the console if the condition "x < y" is true
    }
    if (x > y) { //this is an if statement that checks if the value of "x" is greater than the value of "y". This block of code will be executed regardless of whether the previous condition "x < y" was true or false. If this condition is true, it will execute the block of code inside the curly braces {} and print "x is greater than y" to the console. If this condition is false, it will skip this block of code and check the next condition "x == y".
        printf("x is greater than y\n"); //this prints "x is greater than y" to the console if the condition "x > y" is true
    }
    if (x == y) { //this is an if statement that checks if the value of "x" is equal to the value of "y". This block of code will be executed regardless of whether the previous conditions "x < y" and "x > y" were true or false. If this condition is true, it will execute the block of code inside the curly braces {} and print "x is equal to y" to the console. If this condition is false, it will skip this block of code and do nothing.
        printf("x is equal to y\n"); //this prints "x is equal to y" to the console if the condition "x == y" is true
    }
    //this is bad because it will check all three conditions even if the first one is true, which is inefficient. The correct way to write this would be to use else if statements, as shown in the previous example, which will only check the next condition if the previous one is false.

    c = get_char("Do you agree? (y/n) "); //prompts the user to enter a character and stores it in the preexisting variable "c" this is from cs50.h, it will read a single character from the user and return it as a char. The function get_char is part of the CS50 library and is used to read a single character from the user.
    if (c == 'y' || c == 'Y') { //when working with characters in C, you can use single quotes (' ') to denote a character literal. In this case, 'y' and 'Y' are character literals representing the lowercase and uppercase versions of the letter "y". The double quotes (" ") are used for string literals, which represent a sequence of characters. So, when you want to compare a char variable to a specific character, you should use single quotes to denote the character literal. also the || operator is the logical OR operator, which allows you to check if either condition is true. In this case, it checks if the variable "c" is equal to 'y' or 'Y', which means that the user agreed regardless of whether they entered a lowercase or uppercase "y".
        printf("You agreed!\n"); //this prints "You agreed!" to the console if the user entered 'y' or 'Y'
    }
    else if (c == 'n' || c == 'N') { //this checks if the variable "c" is equal to 'n' or 'N', which means that the user disagreed regardless of whether they entered a lowercase or uppercase "n".
        printf("You disagreed!\n"); //this prints "You disagreed!" to the console if the user entered 'n' or 'N'
    }
    else {
        printf("Invalid input!\n"); //this prints "Invalid input!" to the console if the user entered anything other than 'y', 'Y', 'n', or 'N'
    }
    //======== LOOPS ========
    int i = 3; //declares an integer variable called "i" and initializes it with the value 3
    while (i > 0) { //this is a while loop that will continue to execute as long as the condition "i > 0" is true. In this case, it will print the value of "i" and then decrement it by 1 until "i" is no longer greater than 0.
        printf("%d\n", i); //prints the current value of "i" to the console
        i--; //decrements the value of "i"
    }
    i = 0; //resets the value of "i" to 0
    while (i < 3) { //this is a while loop that will continue to execute as long as the condition "i < 3" is true. In this case, it will print the value of "i" and then increment it by 1 until "i" is no longer less than 3.
        printf("%d\n", i); //prints the current value of "i" to the console
        i++; //increments the value of "i"
    }
    for (i = 0; i < 3; i++) { //this is a for loop that will execute the block of code inside the curly braces {} a specific number of times. In this case, it will initialize "i" to 0, check if "i < 3" is true, and if so, it will execute the block of code and then increment "i" by 1. This process will repeat until "i" is no longer less than 3.
        printf("%d\n", i); //prints the current value of "i" to the console
    }
    int n; //n is in the scope of the main function, which means that it can be accessed and modified by any code within the main function. This variable "n" will be used to store the number of times the user wants to repeat a certain action, which will be determined by the user's input.
    while (true) { //this is a bad example of a loop a better one in this case would be to use a do-while loop, which will execute the block of code at least once and then check the condition at the end of the loop. This way, you can ensure that the user is prompted for input at least once and that the loop will continue to execute until a valid input is received.
        n = get_int("How many times? "); //prompts the user to enter an integer and stores it in the variable "n"
        //our own error handling: this is a while loop that will continue to execute indefinitely until the user enters a valid input for "n". Inside the loop, it prompts the user to enter an integer and stores it in the variable "n". Then, it checks if the value of "n" is less than or equal to 0. If this condition is true, it will print "Please enter a positive integer." to the console and continue the loop, prompting the user to enter a new value for "n". If this condition is false, it will break out of the loop and proceed to the next part of the code, which is a for loop that will print the numbers from 0 to n-1.
        if (n <= 0) { //this checks if the value of "n" is less than or equal to 0. If this condition is true, it will print "Please enter a positive integer." to the console and continue the loop, prompting the user to enter a new value for "n". If this condition is false, it will break out of the loop and proceed to the next part of the code.
            printf("Please enter a positive integer.\n"); //this prints "Please enter a positive integer." to the console if the user entered a value for "n" that is less than or equal to 0
            continue; //this continues the loop, prompting the user to enter a new value for "n"
        }
        else {
            for (int i = 0; i < n; i++) {
                printf("%d\n", i); //this prints the current value of "i" to the console, which will be from 0 to n-1)
            }
            break; //this breaks out of the while loop if the user entered a valid value for "n" (greater than 0)
        }
    }
    //here is a do-while loop that achieves the same result as the previous while loop, but is more concise and easier to read:
    do { //a do-while loop that will execute the block of code inside the curly braces {} at least once and then check the condition at the end of the loop. This way, you can ensure that the user is prompted for input at least once and that the loop will continue to execute until a valid input is received.
        n = get_int("How many times? "); //prompts the user to enter an integer and stores it in the variable "n"
        if (n <= 0) { //this checks if the value of "n" is less than or equal to 0. If this condition is true, it will print "Please enter a positive integer." to the console and continue the loop, prompting the user to enter a new value for "n". If this condition is false, it will break out of the loop and proceed to the next part of the code, which is a for loop that will print the numbers from 0 to n-1.
            printf("Please enter a positive integer.\n"); //this prints "Please enter a positive integer." to the console if the user entered a value for "n" that is less than or equal to 0
        }
    }while (n <= 0);
    for (i = 0; i < n; i++) {
        printf("%d\n", i); //this prints the current value of "i" to the console, which will be from 0 to n-1)
    }
    //======== SCOPE ========
    {
        int n; //this is a block of code that declares a new variable "n" that is local to this block. This means that this variable "n" is different from the previous variable "n" declared outside of this block. The value of this new variable "n" will not affect the value of the previous variable "n" and vice versa. This is an example of variable scope in C, where variables declared inside a block are only accessible within that block and do not interfere with variables declared outside of it.
    }
    //======== FUNCTIONS ========
    //functions are reusable blocks of code that perform a specific task. They can take input parameters
    //and return a value. Functions help to organize code and make it more modular and easier to read. In C, you can define your own functions by specifying the return type, function name, and parameters (if any) in the function declaration, and then providing the function body with the implementation of the desired functionality.
    int number = get_int("Enter a number: "); //prompts the user to enter an integer and stores it in the variable "number"
    if (number <= 0) {
        printf("Please enter a positive integer.\n"); //this prints "Please enter a positive integer." to the console if the user entered a value for "number" that is less than or equal to 0
    }
    else {
        meow(number); //this calls the function "meow" with the argument "number", which will execute the code inside the function body and print "Meow!" to the console "number" times.
    } //we can replace this block of code with a function that handles the input validation and the call to the "meow" function, like this:
    {
        int n = get_n(); //this calls the function "get_n", which will prompt the user to enter a positive integer and return it as "n". The function "get_n" will handle the input validation and ensure that the user enters a valid positive integer before returning the value of "n".
        meow(n); //this calls the function "meow" with the argument "n", which will execute the code inside the function body and print "Meow!" to the console "n" times.
    }
    hello(); //see line 7 and 195 for the function declaration and definition of "hello". This line calls the function "hello", which will execute the code inside the function body and print "Hello" to the console.
    //======== CLEAN CODE ========
    //clean code is code that is easy to read, understand, and maintain. It follows best practices and coding conventions, such as using meaningful variable names, organizing code into functions, and avoiding unnecessary complexity. Clean code is important because it makes it easier for other developers (or yourself in the future) to understand and work with the code, which can save time and reduce the likelihood of bugs. Some principles of clean code include:
    //1. Use meaningful variable and function names that clearly indicate their purpose and functionality.
    //2. Keep functions small and focused on a single task.
    //3. Avoid code duplication by reusing functions and creating helper functions when necessary.
    //4. Use comments to explain the purpose and functionality of code, but avoid over-commenting or stating the obvious.
    //5. Follow consistent coding style and formatting conventions to improve readability
    //6. Handle errors and edge cases gracefully to prevent crashes and improve user experience.
    //7. Refactor code regularly to improve its structure and maintainability as the project evolves.
    //By following these principles, you can write clean code that is easier to read, understand, and maintain, which can lead to more efficient development and a better overall user experience.
    for (int c = 0; c < 4; c++) {
        printf("?"); //if we added a newline character after the question mark, it would print each question mark on a new line, which may not be the desired output. By keeping the question mark and the newline character separate, we can control the formatting of the output more precisely and ensure that the question marks are printed on the same line as intended.
    }
    printf("\n"); //this prints a newline character to the console, which moves the cursor to the next line after printing the question marks.
    for (int c = 0; c < 4; c++) {
        printf("#\n");
    }
    { //I put this in its own scope because the variable "n" is only used within this block of code, and it helps to keep the variable's scope limited to where it is needed. This can improve code readability and prevent accidental modifications to the variable from other parts of the code.
        const int n = 4; //this declares a constant integer variable called "n" and initializes it with the value 4. The "const" keyword indicates that the value of "n" cannot be changed after it is initialized, which can help prevent accidental modifications to the variable and improve code safety.
        for (int row  = 0; row < n; row++) {
           for (int col  = 0; col < n; col++) {
               printf("#"); //this prints a "#" character to the console without a newline character, which allows us to print multiple "#" characters on the same line.
           }
             printf("\n"); //this prints a newline character to the console after printing 4 "#" characters, which moves the cursor to the next line for the next iteration of the outer loop.
        }
    } //End Of Scope
    {//this is another block of code that demonstrates variable scope in C. The variables "x", "y", and "z" declared inside this block are local to this block and do not interfere with any previous variables with the same names declared outside of this block. This allows us to reuse variable names without causing conflicts or confusion, as each variable is only accessible within its own scope.
        int x = get_int("whats x? "); //this declares a new variable "x" that is local to this block. This means that this variable "x" is different from any previous variable "x" declared outside of this block. The value of this new variable "x" will not affect the value of any previous variable "x" and vice versa. This is an example of variable scope in C, where variables declared inside a block are only accessible within that block and do not interfere with variables declared outside of it.
        int y = get_int("whats y? "); //this declares a new variable "y" that is local to this block. This means that this variable "y" is different from any previous variable "y" declared outside of this block. The value of this new variable "y" will not affect the value of any previous variable "y" and vice versa. This is an example of variable scope in C, where variables declared inside a block are only accessible within that block and do not interfere with variables declared outside of it.
        int z = x + y; //this declares a new variable "z" that is local to this block and initializes it with the sum of "x" and "y". This variable "z" is only accessible within this block and does not interfere with any previous variable "z" declared outside of this block.
        //having variables with the same name in different scopes can be useful for organizing code and preventing naming conflicts, but it can also lead to confusion if not used carefully. It is important to choose variable names that are descriptive and meaningful to avoid confusion and improve code readability.
        printf("x + y = %d\n", z); //this prints the value of "z" to the console, which is the sum of "x" and "y". The format specifier %d is used to indicate that "z" is an integer and should be printed as such.
        //having z being only used once is bad practice, it would be better to directly print the result of x + y without storing it in a variable that is only used once. This can improve code readability and reduce unnecessary variables in the code. For example, instead of declaring "int z = x + y;" and then printing "z", you can directly print "x + y" like this: printf("x + y = %d\n", x + y); This way, you can avoid creating a variable that is only used once and make the code more concise and easier to read.
        //so we could do this:
        printf("x + y = %d\n", x+y );
        x = get_int("whats x? "); //this declares a new variable "x" that is local to this block. This means that this variable "x" is different from any previous variable "x" declared outside of this block. The value of this new variable "x" will not affect the value of any previous variable "x" and vice versa. This is an example of variable scope in C, where variables declared inside a block are only accessible within that block and do not interfere with variables declared outside of it.
        printf("x * 2 = %d\n", x*2); //this prints the value of "x" multiplied by 2 to the console. The format specifier %d is used to indicate that the result of "x * 2" is an integer and should be printed as such.
        int dollars = 1;
        while (true) {
            char c = get_char("Here's $%d. double it and give to the next person? ", dollars);
            if (c == 'y' || c == 'Y') {
                dollars *= 2; //this doubles the value of "dollars" by multiplying it by 2 and assigning the result back to "dollars". This is a shorthand way of writing "dollars = dollars * 2;" and is commonly used in C to update the value of a variable based on its current value.
                //this can cause an interager overflow if the value of "dollars" exceeds the maximum value that can be stored in an integer variable. In C, the maximum value for a signed integer is typically 2,147,483,647 (2^31 - 1). If "dollars" exceeds this value, it will wrap around to a negative number due to integer overflow. To prevent this, you can use a larger data type such as "long long" or "unsigned long long" to store the value of "dollars", which can handle larger numbers without overflowing. Alternatively, you can add a check before doubling "dollars" to ensure that it does not exceed the maximum value for an integer before performing the multiplication.
                //to fix this we can do this: (see line 263)
            }
            else if (c == 'n' || c == 'N') {
                printf("You ended with $%d\n", dollars); //this prints the final value of "dollars" to the console when the user decides to end the loop by entering 'n' or 'N'.
                break; //this breaks out of the while loop, ending the program.
            }
            else {
                printf("Invalid input!\n"); //this prints "Invalid input!" to the console if the user entered anything other than 'y', 'Y', 'n', or 'N'
            }
        }


    } //End Of Scope
    {
        long int dollars = 1; //this declares a variable "dollars" of type "long int" and initializes it with the value 1. The "long int" data type can store larger integer values than the standard "int" data type, which can help prevent integer overflow when doubling the value of "dollars".
        while (true) {
            char c = get_char("Here's $%ld. double it and give to the next person? ", dollars); //this prompts the user to enter a character and stores it in the variable "c". The format specifier %ld is used to indicate that "dollars" is a long integer and should be printed as such in the prompt.
            if (c == 'y' || c == 'Y') {
                dollars *= 2; //this doubles the value of "dollars" by multiplying it by 2 and assigning the result back to "dollars". This is a shorthand way of writing "dollars = dollars * 2;" and is commonly used in C to update the value of a variable based on its current value.
            }
            else if (c == 'n' || c == 'N') {
                printf("You ended with $%ld\n", dollars); //this prints the final value of "dollars" to the console when the user decides to end the loop by entering 'n' or 'N'. The format specifier %ld is used to indicate that "dollars"
                break;
            }
            else {
                printf("Invalid input!\n"); //this prints "Invalid input!" to the console if the user entered anything other than 'y', 'Y', 'n', or 'N'
            }
        }
    } //End Of Scope
    { //start of a new block of code to demonstrate variable scope and floating-point division in C
        int x = get_int("whats x? "); //this declares a new variable "x" that is local to this block. This means that this variable "x" is different from any previous variable "x" declared outside of this block. The value of this new variable "x" will not affect the value of any previous variable "x" and vice versa. This is an example of variable scope in C, where variables declared inside a block are only accessible within that block and do not interfere with variables declared outside of it.
        int y = get_int("whats y? "); //this declares a new variable "y" that is local to this block. This means that this variable "y" is different from any previous variable "y" declared outside of this block. The value of this new variable "y" will not affect the value of any previous variable "y" and vice versa. This is an example of variable scope in C, where variables declared inside a block are only accessible within that block and do not interfere with variables declared outside of it.
        printf("x / y = %d\n", x/y ); //this is bad because of something called truncation where it will not return a decimal place because it is treating the result as an integer. To fix this, we can cast either "x" or "y" to a floating-point type (such as float or double) before performing the division, which will allow us to get a more accurate result with decimal places. For example, we can do this: printf("x / y = %.2f\n", (float)x / y); This will print the result of "x / y" as a floating-point number with 2 decimal places.
        //to fix this we can do this:
        {
            float x = get_int("whats x? "); //this declares a new variable "x" that is local to this block. This means that this variable "x" is different from any previous variable "x" declared outside of this block. The value of this new variable "x" will not affect the value of any previous variable "x" and vice versa. This is an example of variable scope in C, where variables declared inside a block are only accessible within that block and do not interfere with variables declared outside of it.
            float y = get_int("whats y? "); //this declares a new variable "y" that is local to this block. This means that this variable "y" is different from any previous variable "y" declared outside of this block. The value of this new variable "y" will not affect the value of any previous variable "y" and vice versa. This is an example of variable scope in C, where variables declared inside a block are only accessible within that block and do not interfere with variables declared outside of it.
            printf("x / y = %.50f\n", x/y ); //this prints the result of "x / y" as a floating-point number with 50 decimal places. The format specifier %.50f is used to indicate that the result should be printed as a floating-point number with 50 decimal places. this will cause floating point imprecision issues if the result has more than 50 decimal places, as it will round the result to fit within the specified number of decimal places. To avoid this, you can choose an appropriate number of decimal places based on the expected precision of the result and the limitations of floating-point representation in C.


        }
    } //End Of Scope
    //======== WEEK 2 ========
    //bool - 1 byte, can be true or false
    //int - 4 bytes, can store whole numbers from -2,147,483,648 to 2,147,483,647
    //long - 8 bytes, can store whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    //float - 4 bytes, can store decimal numbers with about 7 digits of precision
    //double - 8 bytes, can store decimal numbers with about 15 digits of precision
    //char - 1 byte, can store a single character (letter, digit, symbol)
    //string - ? bytes, a sequence of characters, typically stored as an array of char in C
    //======== ARRAYS =======
    int score1 = 72; //this declares an integer variable called "score1" and initializes it with the value 72
    int score2 = 73; //this declares an integer variable called "score2" and initializes it with the value 73
    int score3 = 33; //this declares an integer variable called "score3" and initializes it with the value 33
    printf("Average: %.2f\n", (score1 + score2 + score3) / 3.0); //this calculates the average of the three scores by adding them together and dividing by 3.0 (using 3.0 instead of 3 to ensure that the division is performed as floating-point division, which allows for a more accurate result with decimal places). The format specifier %.2f is used to indicate that the result should be printed as a floating-point number with 2 decimal places.
    //this is bad design we can just use an array
    {
        int scores[3] = {72, 73, 33}; //this declares an array of integers called "scores" with a size of 3 and initializes it with the values 72, 73, and 33. This allows us to store multiple related values in a single variable and access them using an index.
        printf("Average: %.2f\n", (scores[0] + scores[1] + scores[2]) / 3.0); //this calculates the average of the three scores by accessing each score in the "scores" array using its index (0, 1, and 2) and adding them together, then dividing by 3.0 to get the average. The format specifier %.2f is used to indicate that the result should be printed as a floating-point number with 2 decimal places.
    }
    {
        int scores[3] = {get_int("Score: "), get_int("Score: "), get_int("Score: ")};
        //this is also bad design because it is not scalable. If we wanted to calculate the average of 100 scores, we would have to write 100 calls to get_int and manually add them together, which is not efficient or practical. A better design would be to use a loop to read the scores into the array and calculate the average, like this:
        {
            const int n = 3; //this declares a constant integer variable called "n" and initializes it with the value 3. This variable "n" represents the number of scores we want to read and calculate the average for. By using a constant variable, we can easily change the number of scores we want to handle without having to modify multiple parts of the code, which can improve code maintainability and readability.
            int scores[n]; //this declares an array of integers called "scores" with a size of "n". This allows us to store "n" scores in the array and access them using an index.
            for (int i = 0; i < n; i++) { //this is a for loop that will execute "n" times, where "i" is the loop variable that starts at 0 and increments by 1 until it reaches "n". Inside the loop, it prompts the user to enter a score and stores it in the "scores" array at index "i". This allows us to read "n" scores from the user and store them in the array without having to write multiple calls to get_int.
                scores[i] = get_int("Score: "); //this prompts the user to enter a score and stores it in the "scores" array at index "i". This allows us to read "n" scores from the user and store them in the array without having to write multiple calls to get_int.
            }
            int sum = 0; //this declares an integer variable called "sum" and initializes it with the value 0. This variable will be used to accumulate the sum of all the scores in the "scores" array.
            for (int i = 0; i < n; i++) { //this is a for loop that will execute "n" times, where "i" is the loop variable that starts at 0 and increments by 1 until it reaches "n". Inside the loop, it adds the score at index "i" in the "scores" array to the "sum" variable. This allows us to calculate the total sum of all the scores in the array.
                sum += scores[i]; //this adds the score at index "i" in the "scores" array to the "sum" variable. This is a shorthand way of writing "sum = sum + scores[i];" and is commonly used in C to update the value of a variable based on its current value.
            }
            printf("Average: %.2f\n", (float)sum / n); //this calculates the average of the scores by dividing the total "sum" of the scores by "n" (the number of scores). The result is cast to a float to ensure that the division is performed as floating-point division, which allows for a more accurate result with decimal places. The format specifier %.2f is used to indicate that the result should be printed as a floating-point number with 2 decimal places.
            //you think this is a good design? well WRONG!!!! we can do BETTER
        }
        {
            //the final perfected version of the code to read a variable number of scores and calculate the average would look like this:
            int num_of_scores = get_int("How many scores? "); //this prompts the user to enter the number of scores they want to input and stores it in the variable "num_of_scores". This allows us to handle a variable number of scores without having to hardcode the size of the array or the number of iterations in the loops.
            int scores[num_of_scores]; //this declares an array of integers called "scores" with a size of "num_of_scores". This allows us to store the scores in the array based on the number of scores the user wants to input, which can improve code flexibility and scalability.
            for (int i = 0; i < num_of_scores; i++) { //this is a for loop that will execute "num_of_scores" times, where "i" is the loop variable that starts at 0 and increments by 1 until it reaches "num_of_scores". Inside the loop, it prompts the user to enter a score and stores it in the "scores" array at index "i". This allows us to read a variable number of scores from the user and store them in the array without having to write multiple calls to get_int or hardcode the size of the array.
                scores[i] = get_int("Score: "); //this prompts the user to enter a score and stores it in the "scores" array at index "i". This allows us to read a variable number of scores from the user and store them in the array without having to write multiple calls to get_int or hardcode the size of the array.
            }
            int sum = 0; //this declares an integer variable called "sum" and initializes it with the value 0. This variable will be used to accumulate the sum of all the scores in the "scores" array.
            for (int i = 0; i < num_of_scores; i++) { //this is a for loop that will execute "num_of_scores" times, where "i" is the loop variable that starts at 0 and increments by 1 until it reaches "num_of_scores". Inside the loop, it adds the score at index "i" in the "scores" array to the "sum" variable. This allows us to calculate the total sum of all the scores in the array based on the number of scores the user wants to input.
                sum += scores[i]; //this adds the score at index "i" in the "scores" array to the "sum" variable. This is a shorthand way of writing "sum = sum + scores[i];" and is commonly used in C to update the value of a variable based on its current value.
            }
            printf("Average: %.2f\n", (float)sum / num_of_scores); //this calculates the average of the scores by dividing the total "sum" of the scores by "num_of_scores" (the number of scores). The result is cast to a float to ensure that the division is performed as floating-point division, which allows for a more accurate result with decimal places. The format specifier %.2f is used to indicate that the result should be printed as a floating-point number with 2 decimal places. This design allows us to handle a variable number of scores and calculate the average without having to hardcode the size of the array or the number of iterations in the loops, which can improve code flexibility and scalability.
            //now lets do a function version
        }
        {
            int num_of_scores = get_int("How many scores? "); //this prompts the user to enter the number of scores they want to input and stores it in the variable "num_of_scores". This allows us to handle a variable number of scores without having to hardcode the size of the array or the number of iterations in the loops.
            int scores[num_of_scores]; //this declares an array of integers called "scores" with a size of "num_of_scores". This allows us to store the scores in the array based on the number of scores the user wants to input, which can improve code flexibility and scalability.
            for (int i = 0; i < num_of_scores; i++) { //this is a for loop that will execute "num_of_scores" times, where "i" is the loop variable that starts at 0 and increments by 1 until it reaches "num_of_scores". Inside the loop, it prompts the user to enter a score and stores it in the "scores" array at index "i". This allows us to read a variable number of scores from the user and store them in the array without having to write multiple calls to get_int or hardcode the size of the array.
                scores[i] = get_int("Score: "); //this prompts the user to enter a score and stores it in the "scores" array at index "i". This allows us to read a variable number of scores from the user and store them in the array without having to write multiple calls to get_int or hardcode the size of the array.
            }

            printf("Average: %.2f\n", average(num_of_scores, scores)); //this prints the value of "average" to the console with 2 decimal places. The format specifier %.2f is used to indicate that "average" should be printed as a floating-point number with 2 decimal places.
        }
    }
    //what is a string? A string is a sequence of characters, typically stored as an array of char in C. It is used to represent text and can contain letters, digits, symbols, and whitespace. In C, strings are null-terminated, meaning that they end with a special character called the null character ('\0') to indicate the end of the string. This allows functions that operate on strings to determine where the string ends. Strings can be manipulated using various functions from the C standard library, such as strlen (to get the length of a string), strcpy (to copy a string), strcat (to concatenate two strings), and many others.
    char c1 = 'H'; //this declares a character variable called "c1" and initializes it with the value 'H'
    char c2 = 'i'; //this declares a character variable called "c2" and initializes it with the value 'i'
    char c3 = '!'; //this declares a character variable called "c3" and initializes it with the value '!'
    printf("%c%c%c\n", c1, c2, c3); //this prints the characters stored in "c1", "c2", and "c3" to the console. The format specifier %c is used to indicate that each variable should be printed as a character. The output will be "Hi!" followed by a newline character.
    printf("%i %i %i\n", c1, c2, c3); //this prints the integer values of the characters stored in "c1", "c2", and "c3" to the console. The format specifier %i is used to indicate that each variable should be printed as an integer. The output will be the ASCII values of 'H', 'i', and '!', which are 72, 105, and 33 respectively, followed by a newline character.)
    string s = "HI!";
    printf("%s\n", s); //this prints the string stored in "s" to the console. The format specifier %s is used to indicate that "s" should be printed as a string. The output will be "HI!" followed by a newline character.
    printf("%c%c%c\n", s[0], s[1], s[2]); //this prints the individual characters of the string "s" to the console. The format specifier %c is used to indicate that each character should be printed as a character. The output will be "HI!" followed by a newline character, as it accesses the characters at index 0, 1, and 2 of the string "s".
    printf("%c%c%c%c\n", s[0], s[1], s[2], s[3]); //this print the NUL terminator character at the end of the string "s" to the console. The format specifier %c is used to indicate that each character should be printed as a character. The output will be "HI!" followed by a newline character, and then a null character (which may not be visible in the console) because it accesses the characters at index 0, 1, 2, and 3 of the string "s". The character at index 3 is the null terminator ('\0') that indicates the end of the string.
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";
    printf("%s\n", words[0]); //this prints the string stored in "words[0]" to the console. The format specifier %s is used to indicate that "words[0]" should be printed as a string. The output will be "HI!" followed by a newline character.
    printf("%s\n", words[1]); //this prints the string stored in "words[1]" to the console. The format specifier %s is used to indicate that "words[1]" should be printed as a string. The output will be "BYE!" followed by a newline character.
    printf("%c%c%c%c\n", words[0][0], words[0][1], words[0][2]); //this prints the individual characters of the string stored in "words[0]" to the console. The format specifier %c is used to indicate that each character should be printed as a character. The output will be "HI!" followed by a newline character, as it accesses the characters at index 0, 1, and 2 of the string stored in "words[0]".
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2]); //this prints the individual characters of the string stored in "words[1]" to the console. The format specifier %c is used to indicate that each character should be printed as a character. The output will be "BYE!" followed by a newline character, as it accesses the characters at index 0, 1, and 2 of the string stored in "words[1]".
    {
        string name = get_string("What's your name? "); //this prompts the user to enter their name and stores it in the variable "name". The function get_string is part of the CS50 library and is used to read a string from the user. The format specifier %s can be used to print the value of "name" to the console, like this: printf("Hello, %s!\n", name); This will print a greeting that includes the user's name followed by a newline character.
        int n = 0; //this declares an integer variable called "n" and initializes it with the value 0. This variable will be used to store the length of the string "name".
        for (int i = 0; name[i] != '\0'; i++) { //this is a for loop that will iterate through each character of the string "name" until it reaches the null terminator ('\0'), which indicates the end of the string. The loop variable "i" starts at 0 and increments by 1 in each iteration. Inside the loop, it checks if the character at index "i" of the string "name" is not equal to the null terminator. If this condition is true, it means that we are still within the string, and we can increment the variable "n" to count the number of characters in the string.
            n++; //this increments the variable "n" by 1 for each character in the string "name" until it reaches the null terminator. This allows us to calculate the length of the string "name" by counting the number of characters before the null terminator.
        } //this can be replaced with the built-in function strlen from the C standard library, which calculates the length of a string by counting the number of characters until it reaches the null terminator. The code would look like this: int n = strlen(name); This is a more concise and efficient way to calculate the length of a string in C.
        printf("Your name has %i characters.\n", n); //this prints the length of the string "name" to the console. The format specifier %i is used to indicate that "n" should be printed as an integer. The output will be "Your name has X characters." where X is the number of characters in the user's name, followed by a newline character.
        strlen(name); //this is a function from the C standard library that calculates the length of a string by counting the number of characters until it reaches the null terminator. It takes a string as an argument and returns the length of the string as an integer. Using strlen can simplify the code and improve readability when calculating the length of a string in C.
        printf("Your name has %i characters.\n", strlen(name)); //this prints the length of the string "name" to the console using the strlen function. The format specifier %i is used to indicate that the result of strlen(name) should be printed as an integer. The output will be "Your name has X characters." where X is the number of characters in the user's name, followed by a newline character.
    }
    {
        string s = get_string("Input:  ");
        printf("Output: %s\n", s);
        for (int i = 0; i < strlen(s); i++) { //this is bad practice because it calls the strlen function in every iteration of the loop, which can be inefficient for long strings. A better approach would be to calculate the length of the string once and store it in a variable before the loop, like this: int length = strlen(s); for (int i = 0; i < length; i++) { printf("%c\n", s[i]); } This way, we avoid calling strlen multiple times and improve the efficiency of the loop.
            printf("%c", s[i]);
        }
        printf("\n");
    }//so we could do this instead:
    {
        string s = get_string("Input:  ");
        printf("Output: %s\n", s);
        for (int i = 0, n = strlen(s) ; i < n; i++) { //this is a for loop that will iterate through each character of the string "s" based on the length calculated earlier. The loop variable "i" starts at 0 and increments by 1 in each iteration. Inside the loop, it prints the character at index "i" of the string "s" followed by a newline character. This allows us to print each character of the string on a new line without having to call strlen multiple times.
            printf("%c\n", s[i]);
        }
    }
    {
        string s = get_string("Before: ");
        printf("After:  ");
        for (int i = 0, n = strlen(s); i < n; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') { //this checks if the character at index "i" of the string "s" is a lowercase letter (between 'a' and 'z'). If this condition is true, it means that the character is a lowercase letter and we can convert it to uppercase by subtracting 32 from its ASCII value.
                printf("%c", s[i] - 32); //this converts the lowercase letter at index "i" of the string "s" to uppercase by subtracting 32 from its ASCII value. This works because in the ASCII character encoding, the difference between lowercase and uppercase letters is 32. For example, the ASCII value of 'a' is 97, and the ASCII value of 'A' is 65, so subtracting 32 from 97 gives us 65, which corresponds to 'A'. This allows us to convert all lowercase letters in the string to uppercase when printing them.
            }
            else {
                printf("%c", s[i]); //this prints the character at index "i" of the string "s" without modification if it is not a lowercase letter. This allows us to preserve any characters that are not lowercase letters while converting only the lowercase letters to uppercase.
            } //we can shorten this by using <ctype.h> library and using the toupper function, like this: printf("%c", toupper(s[i])); This will automatically convert any lowercase letter to uppercase and leave other characters unchanged, simplifying the code and improving readability.
        }
    }
    {
        string s = get_string("Before: ");
        printf("After:  ");
        for (int i = 0, n = strlen(s); i < n; i++) {
            printf("%c", toupper(s[i])); //this uses the toupper function from the ctype.h library to convert each character of the string "s" to uppercase when printing it. The toupper function takes a character as an argument and returns the uppercase version of that character if it is a lowercase letter, or returns the character unchanged if it is not a lowercase letter. This simplifies the code and improves readability by eliminating the need for manual checks and conversions for each character.
        }
    }

    //summary on strings in C: Strings in C are sequences of characters stored as arrays of char. They are null-terminated, meaning they end with a null character ('\0') to indicate the end of the string. You can manipulate strings using various functions from the C standard library, such as strlen (to get the length of a string), strcpy (to copy a string), strcat (to concatenate two strings), and toupper (to convert characters to uppercase). When working with strings, it's important to ensure that you have enough space in your arrays to store the characters and the null terminator, and to be mindful of potential issues such as buffer overflows when manipulating strings in C.
    if (argc == 2) { //this checks if the number of command-line arguments passed to the program is equal to 2. The variable "argc" (argument count) represents the number of command-line arguments, including the program name itself. If this condition is true, it means that the user has provided exactly one additional argument (the first command-line argument after the program name), and we can proceed to print a greeting that includes that argument.
        printf("hello, %s\n", argv[1]); //this prints a greeting that includes the first command-line argument passed to the program (argv[1]) followed by a newline character. The format specifier %s is used to indicate that argv[1] should be printed as a string. This allows us to greet the user based on the input they provide when running the program from the command line. (look at the top of the main function to see how command-line arguments work in C)
    }
    else {
        printf("Hello, World!");
    }
    if (argc != 2) {
        printf("Error: Missing command-line argument.\n"); //this checks if the number of command-line arguments passed to the program is not equal to 2. If this condition is true, it means that the user has not provided exactly one additional argument (the first command-line argument after the program name), and we can print a warning message to the console indicating that a command-line argument is missing. The format specifier %s is used to indicate that the message should be printed as a string.
        return 1; //this returns 1 to indicate that the program ended with an error due to the missing command-line argument. In C, returning a non-zero value from the main function typically indicates that the program encountered an error or did not execute successfully. By returning 1, we can signal to the operating system or any calling processes that the program did not complete as expected due to the missing command-line argument.
    }
    //======== WEEK 3 ========
    //======== ALGORITHMS ========
    //======== LINEAR SEARCH ========
    {
        int numbers[] = {20,500,10,5,100,1,50}; //this declares an array of integers called "numbers" and initializes it with the values 20, 500, 10, 5, 100, 1, and 50. This allows us to store multiple related values in a single variable and access them using an index.
        int n = get_int("Number: "); //this prompts the user to enter an integer and stores it in the variable "n". This allows us to read a number from the user that we want to search for in the "numbers" array.

        for (int i = 0; i < sizeof(n)/sizeof(int); i++) {
            if (numbers[i] == n) { //this checks if the value at index "i" in the "numbers" array is equal to the value of "n" that the user entered. If this condition is true, it means that we have found a match for the number in the array.
                printf("Found at index %i\n", i); //this prints "Found at index X" to the console, where X is the index of the matching number in the "numbers" array. The format specifier %i is used to indicate that "i" should be printed as an integer. This allows us to inform the user that we have found a match for the number they entered and provide the index where it was found in the array.
                return 0; //this returns 0 to indicate that the program ended successfully after finding a match for the number in the array.
            }
        }
        printf("Not Found!\n"); //this prints "Not Found!" to the console if we have iterated through the entire "numbers" array and did not find a match for the number that the user entered. This indicates that the number is not present in the array.
        string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"}; //this declares an array of strings called "strings" and initializes it with the values "battleship", "boot", "cannon", "iron", "thimble", and "top hat". This allows us to store multiple related string values in a single variable and access them using an index.
        string s = get_string("String: "); //this prompts the user to enter a string and stores it in the variable "s". This allows us to read a string from the user that we want to search for in the "strings" array.
        for (int i = 0; i < sizeof(strings)/sizeof(string); i++) {
            if (strcmp(strings[i], s) == 0) { //this checks if the string at index "i" in the "strings" array is equal to the string "s" that the user entered. The strcmp function from the C standard library is used to compare two strings and returns 0 if they are equal. If this condition is true, it means that we have found a match for the string in the array. We need to use strcmp to compare strings in C because the == operator does not work for string comparison, as it compares the memory addresses of the strings rather than their contents. Using strcmp allows us to compare the actual characters in the strings and determine if they are equal.
                printf("Found at index %i\n", i); //this prints "Found at index X" to the console, where X is the index of the matching string in the "strings" array. The format specifier %i is used to indicate that "i" should be printed as an integer. This allows us to inform the user that we have found a match for the string they entered and provide the index where it was found in the array.
                return 0; //this returns 0 to indicate that the program ended successfully after finding a match for the string in the array.
            }
        }
        printf("Not Found!\n"); //this prints "Not Found!" to the console if we have iterated through the entire "strings" array and did not find a match for the string that the user entered. This indicates that the string is not present in the array.
    }
    {
        string names[] = {"Jamie", "David", "Brandon", "Kirsten", "Emily", "Sarah"}; //this declares an array of strings called "names" and initializes it with the values "Jamie", "David", "Brandon", "Kirsten", "Emily", and "Sarah". This allows us to store multiple related string values in a single variable and access them using an index.
        string numbers[] = {"+44 123456789", "+44 987654321", "+44 555555555", "+44 111111111", "+44 222222222", "+44 333333333"}; //this declares an array of strings called "numbers" and initializes it with the values "+44 123456789", "+44 987654321", "+44 555555555", "+44 111111111", "+44 222222222", and "+44 333333333". This allows us to store multiple related string values in a single variable and access them using an index.
        string name = get_string("Name: "); //this prompts the user to enter a name and stores it in the variable "name". This allows us to read a name from the user that we want to search for in the "names" array and retrieve the corresponding phone number from the "numbers" array.
        for (int i = 0; i < sizeof(names)/sizeof(string); i++) {
            if (strcmp(names[i], name) == 0 ) { //this checks if the string at index "i" in the "names" array is equal to the string "name" that the user entered. The strcmp function from the C standard library is used to compare two strings and returns 0 if they are equal. If this condition is true, it means that we have found a match for the name in the array. We can then print the corresponding phone number from the "numbers" array at the same index "i".
                printf("Number: %s\n", numbers[i]); //this prints "Number: X" to the console, where X is the phone number corresponding to the matching name in the "numbers" array at index "i". The format specifier %s is used to indicate that "numbers[i]" should be printed as a string. This allows us to inform the user of the phone number associated with the name they entered after finding a match in the "names" array.
                return 0; //this returns 0 to indicate that the program ended successfully after finding a match for the name and printing the corresponding phone number.
            }
            printf("Error 404: Name not found!\n"); //this prints "Error 404: Name not found!" to the console if we have iterated through the entire "names" array and did not find a match for the name that the user entered. This indicates that the name is not present in the array.


        }
        //this is bad practice for a phone book because it uses two separate arrays to store names and phone numbers, which can lead to issues with data integrity and maintenance. A better design would be to use a struct to represent a contact that contains both the name and the phone number, and then create an array of these structs to store the contacts. This way, we can ensure that each name is always associated with the correct phone number and improve code organization and readability. For example:
    }
    {
        typedef struct {
            string name;
            string number;
        } contact; //this defines a struct called "contact" that contains two members: "name" and "number", both of which are strings. This allows us to represent a contact in our phone book with both the name and the phone number as part of a single data structure.

        contact contacts[] = {
            {"Jamie", "+44 123456789"},
            {"David", "+44 987654321"},
            {"Brandon", "+44 555555555"},
            {"Kirsten", "+44 111111111"},
            {"Emily", "+44 222222222"},
            {"Sarah", "+44 333333333"}
        }; //this declares an array of "contact" structs called "contacts" and initializes it with the values for each contact's name and phone number. This allows us to store multiple contacts in a single array and access their information using an index.

        string name = get_string("Name: "); //this prompts the user to enter a name and stores it in the variable "name". This allows us to read a name from the user that we want to search for in the "contacts" array and retrieve the corresponding phone number.

        for (int i = 0; i < sizeof(contacts)/sizeof(contact); i++) {
            if (strcmp(contacts[i].name, name) == 0) {
                //this checks if the "name" member of the "contact" struct at index "i" in the "contacts" array is equal to the string "name" that the user entered. The strcmp function from the C standard library is used to compare two strings and returns 0 if they are equal. If this condition is true, it means that we have found a match for the name in the array. We can then print the corresponding phone number from the "number" member of the same "contact" struct at index "i".
                printf("Number: %s\n", contacts[i].number); //this prints "Number: X" to the console, where X is the phone number corresponding to the matching name in the "contacts" array at index "i". The format specifier %s is used to indicate that "contacts[i].number" should be printed as a string. This allows us to inform the user of the phone number associated with the name they entered after finding a match in the "contacts" array.
                return 0; //this returns 0 to indicate that the program ended successfully after finding a match for the name and printing the corresponding phone number.
            }
        }
    }
    //======== ITERATION AND RECURSION =========
    {
        int height = get_int("Height: ");
        draw_iteration(height);
    }
    {
        int height = get_int("Height: ");
        draw_recursive(height);
    }

    //======== WEEK 4 ========
    //okay its finally time to take off the training wheels (which was the CS50 library) and talk about pointers and memory management in C.
    {
        int n = 50; //this declares an integer variable called "n" and initializes it with the value 50. This variable can be used to store and manipulate integer values in the program.
        printf("%d\n", n);
        printf("%p\n", &n); //this prints the memory address of the variable "n" to the console. The & operator is used to get the address of a variable in C. This allows us to see where the variable "n" is stored in memory, which can be useful for understanding how variables and memory work in C.

    }
    //======== POINTERS ========
    {
        int n = 50; //this declares an integer variable called "n" and initializes it with the value 50. This variable can be used to store and manipulate integer values in the program.
        int *p = &n; //this declares a pointer variable called "p" that is of type "int*" (pointer to an integer) and initializes it with the address of the variable "n". The & operator is used to get the address of a variable in C. This allows us to create a pointer that points to the memory location where "n" is stored, which can be useful for understanding how pointers work in C and for manipulating the value of "n" indirectly through the pointer.
        printf("%d\n", n); //this prints the value of the variable "n" to the console. The format specifier %d is used to indicate that "n" should be printed as an integer. The output will be 50 followed by a newline character.
        printf("%p\n", &n); //this prints the memory address of the variable "n" to the console. The & operator is used to get the address of a variable in C. This allows us to see where the variable "n" is stored in memory, which can be useful for understanding how variables and memory work in C.
        printf("%p\n", p); //this prints the value of the pointer variable "p" to the console, which is the memory address that it points to (the address of "n"). The format specifier %p is used to indicate that "p" should be printed as a pointer (memory address). This allows us to see that "p" indeed points to the same memory address as "&n", confirming that it is correctly initialized as a pointer to "n".
        printf("%d\n", *p); //this prints the value at the memory address that the pointer "p" is pointing to, which is the value of "n". The * operator is used to dereference the pointer, meaning it accesses the value stored at the memory address that "p" points to. The format specifier %d is used to indicate that the dereferenced value should be printed as an integer. The output will be 50 followed by a newline character, confirming that dereferencing "p" gives us the value of "n".

    }
    //what are strings actually?
    {
        //before we did this:
        string s = "HI!"; //this declares a string variable called "s" and initializes it with the value "HI!". In C, a string is actually an array of characters that ends with a null terminator ('\0') to indicate the end of the string. So, when we declare a string like this, it is stored in memory as an array of characters: {'H', 'I', '!', '\0'}. The variable "s" is essentially a pointer to the first character of this array, which allows us to access and manipulate the string using pointer arithmetic and string functions from the C standard library.
        printf("%p\n", s); //this prints the memory address of the first character of the string literal "HI!" that the variable "s" is initialized with. The format specifier %p is used to indicate that "s" should be printed as a pointer (memory address). This allows us to see where the string literal is stored in memory, which can be useful for understanding how strings and memory work in C.)
        printf("%p\n", &s[0]);
        printf("%p\n", &s[1]);
        printf("%p\n", &s[2]);
        printf("%p\n", &s[3]); //this prints the memory addresses of each character in the string literal "HI!" that the variable "s" is initialized with. The format specifier %p is used to indicate that each address should be printed as a pointer (memory address). This allows us to see the memory layout of the string literal, where each character is stored in contiguous memory locations, and the last address corresponds to the null terminator ('\0') that indicates the end of the string.
        //but we could also do this:
        char str[] = "HI!"; //this declares an array of characters called "s" and initializes it with the value "HI!". In C, a string is actually an array of characters that ends with a null terminator ('\0') to indicate the end of the string. So, when we declare a string like this, it is stored in memory as an array of characters: {'H', 'I', '!', '\0'}. The variable "s" is an array of characters that contains the string "HI!" and can be accessed using array indexing or pointer arithmetic. Both declarations (string s = "HI!" and char s[] = "HI!") are valid ways to create a string in C, but they have different implications for how the string is stored and accessed in memory. The first declaration creates a pointer to a string literal, while the second declaration creates an array of characters that is initialized with the string literal.
        printf("%p\n", str); //this prints the memory address of the first character of the string literal "HI!" that the array "str" is initialized with. The format specifier %p is used to indicate that "str" should be printed as a pointer (memory address). This allows us to see where the string literal is stored in memory, which can be useful for understanding how strings and memory work in C.)
        printf("%p\n", &str[0]);
        printf("%p\n", &str[1]);
        printf("%p\n", &str[2]);
        printf("%p\n", &str[3]); //this prints the memory addresses of each character in the string literal "HI!" that the array "str" is initialized with. The format specifier %p is used to indicate that each address should be printed as a pointer (memory address). This allows us to see the memory layout of the string literal, where each character is stored in contiguous memory locations, and the last address corresponds to the null terminator ('\0') that indicates the end of the string.

        //or even better this:
        char* string = "HI!"; //this declares a pointer to a character called "string" and initializes it with the value "HI!". In C, a string is actually an array of characters that ends with a null terminator ('\0') to indicate the end of the string. So, when we declare a string like this, it is stored in memory as an array of characters: {'H', 'I', '!', '\0'}. The variable "string" is a pointer to the first character of this array, which allows us to access and manipulate the string using pointer arithmetic and string functions from the C standard library. This declaration is similar to the first one (string s = "HI!") but uses explicit pointer syntax to indicate that "string" is a pointer to a character (the first character of the string literal). Both declarations are valid ways to create a string in C, but they have different implications for how the string is stored and accessed in memory. The first declaration creates a pointer to a string literal, while the second declaration creates an array of characters that is initialized with the string literal. The third declaration explicitly indicates that we are working with a pointer to a character, which can be useful for understanding how strings are represented in C.
        printf("%p\n", string); //this prints the memory address of the string literal "HI!" that the pointer "string") is pointing to. The format specifier %p is used to indicate that "string" should be printed as a pointer (memory address). This allows us to see where the string literal is stored in memory, which can be useful for understanding how strings and pointers work in C.
        printf("%p\n", &string[0]);
        printf("%p\n", &string[1]);
        printf("%p\n", &string[2]);
        printf("%p\n", &string[3]); //this prints the memory addresses of each character in the string literal "HI!" that the pointer "string" is pointing to. The format specifier %p is used to indicate that each address should be printed as a pointer (memory address). This allows us to see the memory layout of the string literal, where each character is stored in contiguous memory locations, and the last address corresponds to the null terminator ('\0') that indicates the end of the string.
        //we can also do this:
        char* str2 = "HI!"; //this declares a pointer to a character called "str2" and initializes it with the value "HI!". In C, a string is actually an array of characters that ends with a null terminator ('\0') to indicate the end of the string. So, when we declare a string like this, it is stored in memory as an array of characters: {'H', 'I', '!', '\0'}. The variable "str2" is a pointer to the first character of this array, which allows us to access and manipulate the string using pointer arithmetic and string functions from the C standard library. This declaration is similar to the first one (string s = "HI!") but uses explicit pointer syntax to indicate that "str2" is a pointer to a character (the first character of the string literal). Both declarations are valid ways to create a string in C, but they have different implications for how the string is stored and accessed in memory. The first declaration creates a pointer to a string literal, while the second declaration creates an array of characters that is initialized with the string literal. The third declaration explicitly indicates that we are working with a pointer to a character, which can be useful for understanding how strings are represented in C.
        printf("%c\n", *str2); //this prints the memory address of the string literal "HI!" that the pointer "str2" is pointing to. The format specifier %p is used to indicate that "str2" should be printed as a pointer (memory address). This allows us to see where the string literal is stored in memory, which can be useful for understanding how strings and pointers work in C.
        printf("%c\n", *(str2 + 1)); //this prints the memory address of the second character in the string literal "HI!" that the pointer "str2" is pointing to. The format specifier %p is used to indicate that "str2 + 1" should be printed as a pointer (memory address). This allows us to see where the second character of the string literal is stored in memory, which can be useful for understanding how strings and pointers work in C.);
        printf("%c\n", *(str2 + 2)); //this prints the memory address of the third character in the string literal "HI!" that the pointer "str2" is pointing to. The format specifier %p is used to indicate that "str2 + 2" should be printed as a pointer (memory address). This allows us to see where the third character of the string literal is stored in memory, which can be useful for understanding how strings and pointers work in C.);
        printf("%c\n", *(str2 + 3)); //this prints the memory address of the null terminator ('\0') that indicates the end of the string literal "HI!" that the pointer "str2" is pointing to. The format specifier %p is used to indicate that "str2 + 3" should be printed as a pointer (memory address). This allows us to see where the null terminator of the string literal is stored in memory, which can be useful for understanding how strings and pointers work in C. The null terminator is important because it indicates the end of the string, allowing functions that operate on strings to know where the string ends when processing it.
    }
    {
        int i = 50; //this declares an integer variable called "i" and initializes it with the value 50. This variable can be used to store and manipulate integer values in the program.
        int j = 50; //this declares another integer variable called "j" and initializes it with the value 50. This variable can also be used to store and manipulate integer values in the program. Both "i" and "j" are separate variables that can hold their own values, even though they are initialized with the same value of 50. This allows us to work with multiple integer variables in our program and perform operations on them as needed.
        if (i == j) { //this checks if the value of "i" is equal to the value of "j". If this condition is true, it means that both variables hold the same value (in this case, 50), and we can execute the code inside the if statement. This allows us to compare the values of two variables and perform certain actions based on whether they are equal or not.
            printf("Equal!\n"); //this prints "Equal!" to the console if the condition in the if statement (i == j) is true, indicating that the values of "i" and "j" are equal. In this case, since both "i" and "j" are initialized with the value 50, this message will be printed when the program runs.
        }
        else {
            printf("Not Equal!\n"); //this prints "Not Equal!" to the console if the condition in the if statement (i == j) is false, indicating that the values of "i" and "j" are not equal. In this case, since both "i" and "j" are initialized with the same value of 50, this message will not be printed when the program runs.).
        }
        //======= MEMORY MANAGEMENT =======
        //in C, we have to manage memory manually, which means we need to allocate and free memory ourselves. This is done using functions like malloc (to allocate memory) and free (to free allocated memory). When we allocate memory using malloc, it returns a pointer to the allocated memory, and we can use this pointer to access and manipulate the memory. However, it is important to remember to free any allocated memory when we are done using it to avoid memory leaks, which can lead to inefficient use of memory and potential crashes in larger programs. Proper memory management is crucial in C programming to ensure that our programs run efficiently and do not consume more memory than necessary. It also helps prevent bugs and security vulnerabilities that can arise from improper memory handling, such as buffer overflows or dangling pointers.
        {
            char* s;
            fgets(s, sizeof(s), stdin); //this attempts to read a string from standard input (stdin) and store it in the memory location pointed to by "s". However, this code is incorrect because "s" is an uninitialized pointer, which means it does not point to a valid memory location where the input can be stored. This can lead to undefined behavior, such as crashing the program or overwriting other parts of memory. To fix this, we need to allocate memory for "s" before using it with fgets, for example by using malloc to allocate a buffer of sufficient size to hold the input string.
            if (s == NULL) {
                printf("Error reading input!\n");
                return 1; //this returns 1 to indicate that the program ended with an error due to a failure in reading input. In C, returning a non-zero value from the main function typically indicates that the program encountered an error or did not execute successfully. By returning 1, we can signal to the operating system or any calling processes that the program did not complete as expected due to an issue with reading input.
            }
            char* t = malloc(strlen(s) + 1);
            if (t == NULL) {
                printf("Memory allocation failed!\n");
                return 1; //this returns 1 to indicate that the program ended with an error due to memory allocation failure. In C, returning a non-zero value from the main function typically indicates that the program encountered an error or did not execute successfully. By returning 1, we can signal to the operating system or any calling processes that the program did not complete as expected due to the memory allocation failure.
            }
            strcpy(t, s);
            free(t);
        }
        {
            int *x = malloc(3*sizeof(int));
            if (x == NULL) {
                printf("Memory allocation failed!\n");
                return 1; //this returns 1 to indicate that the program ended with an error due to memory allocation failure. In C, returning a non-zero value from the main function typically indicates that the program encountered an error or did not execute successfully. By returning 1, we can signal to the operating system or any calling processes that the program did not complete as expected due to the memory allocation failure.
            }
            x[0] = 72;
            x[1] = 73;
            x[2] = 33;
            free(x);
        }
    }
    //======== GARBAGE VALUES ========
    {
        int x; //this declares an integer variable called "x" without initializing it. In C, uninitialized variables can contain garbage values, which are random values that happen to be in the memory location allocated for "x". This means that if we try to use the value of "x" before assigning it a specific value, we may get unpredictable results, as it could contain any arbitrary value. It is important to always initialize variables in C to avoid using garbage values and ensure that our program behaves as expected.
        printf("%d\n", x); //this prints the value of the uninitialized variable "x" to the console. Since "x" is uninitialized, it may contain a garbage value, which is a random value that happens to be in the memory location allocated for "x". This means that the output of this line can be unpredictable and may vary each time the program is run, as it could print any arbitrary value depending on what happens to be in that memory location at the time.
        int scores[1024];
        for (int i = 0; i < 1024; i++) {
            printf("%d\n", scores[i]); //this prints the value of each element in the "scores" array to the console. Since the "scores" array is declared but not initialized, it may contain garbage values, which are random values that happen to be in the memory locations allocated for the array. This means that the output of this loop can be unpredictable and may vary each time the program is run, as it could print any arbitrary values depending on what happens to be in those memory locations at the time.
        }
    }
    //======== MORE ON POINTERS ========
    {
        int x = 1;
        int y = 2;
        printf("%d\n", x);
        printf("%d\n", y);
        badswap(x,y);
        printf("%d\n", x);
        printf("%d\n", y);
        pointerswap(&x, &y);
        printf("%d\n", x);
        printf("%d\n", y);
    }

    return 0; //returns 0 to indicate that the program ended successfully
}
double average(int n, int scores[]) { //this is a function declaration for a function called "average" that takes two parameters: an integer "n" representing the number of scores and an array of integers "scores" containing the scores. The function returns a float representing the average of the scores. The function body is defined within the curly braces {} and contains the code that will be executed when the function is called. In this case, it calculates the sum of the scores and then divides it by "n" to get the average, which is returned as a float.
    int sum = 0; //this declares an integer variable called "sum" and initializes it with the value 0. This variable will be used to accumulate the sum of all the scores in the "scores" array.
    for (int i = 0; i < n; i++) {
        //this is a for loop that will execute "n" times, where "i" is the loop variable that starts at 0 and increments by 1 until it reaches "n". Inside the loop, it adds the score at index "i" in the "scores" array to the "sum" variable. This allows us to calculate the total sum of all the scores in the array based on the number of scores passed as a parameter to the function.
        sum += scores[i]; //this adds the score at index "i" in the "scores" array to the "sum" variable. This is a shorthand way of writing "sum = sum + scores[i];" and is commonly used in C to update the value of a variable based on its current value.
    }
    return (float)sum / n; //this calculates the average of the scores by dividing the total "sum" of the scores by "n" (the number of scores). The result is cast to a float to ensure that the division is performed as floating-point division, which allows for a more accurate result with decimal places. The calculated average is then returned as a float to the caller of the function.
}
void hello(void) { //this is a function declaration for a function called "hello" that takes no parameters and returns void (no value). The function body is defined within the curly braces {} and contains the code that will be executed when the function is called. In this case, it simply prints "Hello, world!" to the console.
    printf("Hello, world!\n"); //this prints "Hello, world!" to the console followed by a newline character
}
int get_n(void) {
    int n; //this declares an integer variable called "n" that will be used to store the number of times the user wants to repeat a certain action, which will be determined by the user's input.
    do {
        n = get_int("How many times? "); //prompts the user to enter an integer and stores it in the variable "n". This is from cs50.h, it will read an integer from the user and return it as an int. The function get_int is part of the CS50 library and is used to read an integer from the user.
        if (n <= 0) { //this checks if the value of "n" is less than or equal to 0. If this condition is true, it will print "Please enter a positive integer." to the console and continue the loop, prompting the user to enter a new value for "n". If this condition is false, it will break out of the loop and proceed to return the value of "n".
            printf("Please enter a positive integer.\n"); //this prints "Please enter a positive integer." to the console if the user entered a value for "n" that is less than or equal to 0
        }
    } while (n <= 0); //this is a do-while loop that will execute the block of code inside the curly braces {} at least once and then check the condition at the end of the loop. This way, you can ensure that the user is prompted for input at least once and that the loop will continue to execute until a valid input is received. Inside the loop, it prompts the user to enter an integer and stores it in the variable "n". Then, it checks if the value of "n" is less than or equal to 0. If this condition is true, it will print "Please enter a positive integer." to the console and continue the loop, prompting the user to enter a new value for "n". If this condition is false, it will break out of the loop and proceed to return the value of "n".
    return n; //this returns the value of "n" to the caller of the function, which can be used in other parts of the code. This allows you to separate the logic for getting a valid input from the user into its own function, which can improve code organization and readability.
}
void draw_iteration(int n) { //this is a function declaration for a function called "draw" that takes an integer parameter "n" and returns void (no value). The function body is defined within the curly braces {} and contains the code that will be executed when the function is called. In this case, it uses nested loops to draw a pattern of hashes (#) based on the value of "n".
    for (int i = 0; i < n; i++) { //this is the outer loop that will execute "n" times, where "i" is the loop variable that starts at 0 and increments by 1 until it reaches "n". This loop controls the number of rows in the pattern.
        for (int j = 0; j <= i; j++) { //this is the inner loop that will execute "i + 1" times for each iteration of the outer loop, where "j" is the loop variable that starts at 0 and increments by 1 until it reaches "i". This loop controls the number of hashes (#) printed in each row, which increases by one for each subsequent row.
            printf("#"); //this prints a hash character (#) to the console without a newline. This allows us to print multiple hashes on the same line based on the current iteration of the inner loop.
        }
        printf("\n"); //this prints a newline character after each iteration of the outer loop, which moves the cursor to the next line. This allows us to create a new row in the pattern after printing the appropriate number of hashes for each row.
    }
}
void draw_recursive(int n) { //this is a function declaration for a function called "draw_recursive" that takes two integer parameters "n" and "i", and returns void (no value). The function body is defined within the curly braces {} and contains the code that will be executed when the function is called. In this case, it uses recursion to draw a pattern of hashes (#) based on the value of "n".
    if (n <= 0) { //this checks if the value of "n" is less than or equal to 0. If this condition is true, it means that we have reached the base case of the recursion, and we can return from the function without doing anything further. This serves as the stopping point for the recursive calls and prevents infinite recursion.
        return; //this returns from the function when the base case is reached, which allows us to stop the recursion and prevent infinite calls to the function.
    }
    draw_recursive(n - 1); //this is normally bad practice because if you give it to big of a number it crashes this would not happen in iteration
    for (int i = 0; i < n; i++) {
        printf("#");
    }
    printf("\n");
}
void badswap(int a, int b) {
    int temp = a; //this declares an integer variable called "temp" and initializes it with the value of "a". This variable will be used to temporarily store the value of "a" during the swap process.
    a = b; //this assigns the value of "b" to "a", effectively overwriting the original value of "a". At this point, "a" now holds the value that was originally in "b".
    b = temp; //this assigns the value stored in "temp" (which is the original value of "a") to "b". This completes the swap by giving "b" the original value of "a", while "a" now has the original value of "b". However, this function will not actually swap the values of "a" and "b" outside of this function because "a" and "b" are passed by value, meaning that the function receives copies of the original variables. To properly swap the values of two integers in C, we would need to use pointers to pass the addresses of the variables and modify the values at those addresses. For example we could declare the function as "void swap(int *a, int *b)" and then use dereferencing to swap the values at the memory addresses pointed to by "a" and "b".
}
void pointerswap(int *a, int *b) {
    int temp = *a; //this declares an integer variable called "temp" and initializes it with the value pointed to by "a". The * operator is used to dereference the pointer "a", which means it accesses the value stored at the memory address that "a" points to. This allows us to temporarily store the value of "a" before we overwrite it with the value of "b".
    *a = *b; //this assigns the value pointed to by "b" to the location pointed to by "a". The * operator is used to dereference both pointers, allowing us to access and modify the values stored at those memory addresses. This effectively assigns the value of "b" to "a", overwriting the original value of "a".
    *b = temp; //this assigns the value stored in the temporary variable "temp" (which holds the original value of "a") to the location pointed to by "b". The * operator is used to dereference the pointer "b", allowing us to access and modify the value stored at that memory address. This completes the swap by assigning the original value of "a" (stored in "temp") to "b".
}