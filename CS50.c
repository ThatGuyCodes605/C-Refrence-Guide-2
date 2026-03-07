#include <stdio.h> //standard input/output library, which provides functions for reading and writing data to the console and files
#include <cs50.h> //CS50 library, which provides additional functions for working with strings, files, and other data types
int get_n(void); //function prototype for the function "get_n", which will be defined later in the code. This allows us to call the function "get_n" from the main function before its actual definition, which can improve code organization and readability.
int average(int n, int scores[]); //function prototype for the function "average", which will be defined later in the code. This allows us to call the function "average" from the main function before its actual definition, which can improve code organization and readability.
void meow(int n) {
    //this is a function declaration for a function called "meow" that takes no parameters and returns void (no value). The function body is defined within the curly braces {} and contains the code that will be executed when the function is called. In this case, it simply prints "Meow!" to the console.
    for (int i = 0; i < n; i++) { //this is a for loop that will execute the block of code inside the curly braces {} a specific number of times. In this case, it will initialize "i" to 0, check if "i < n" is true, and if so, it will execute the block of code and then increment "i" by 1. This process will repeat until "i" is no longer less than "n".
         printf("Meow!\n"); //this prints "Meow!" to the console followed by a newline character, and it will be printed "n" times because of the for loop.
    }
} //it is better do use a function prototype then whatever this is for example, you can declare the function prototype at the top of the file like this: void meow(void); and then define the function body later in the file. This way, you can call the function "meow" from anywhere in the file without having to worry about the order of the function definitions.
void hello(void);
int main(void) {
    //if for some reason you want to compile this program run "make" in the terminal, and then run "./CS50" to execute the compiled program. This will allow you to see the output of the program and interact with it as needed.
    //week 1
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
    //week 2:
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
    char c1 = 'H'; //this declares a character variable called "c1" and initializes it with the value 'H'
    char c2 = 'i'; //this declares a character variable called "c2" and initializes it with the value 'i'
    char c3 = '!'; //this declares a character variable called "c3" and initializes it with the value '!'
    printf("%c%c%c\n", c1, c2, c3); //this prints the characters stored in "c1", "c2", and "c3" to the console. The format specifier %c is used to indicate that each variable should be printed as a character. The output will be "Hi!" followed by a newline character.
    printf("%i %i %i\n", c1, c2, c3); //this prints the integer values of the characters stored in "c1", "c2", and "c3" to the console. The format specifier %i is used to indicate that each variable should be printed as an integer. The output will be the ASCII values of 'H', 'i', and '!', which are 72, 105, and 33 respectively, followed by a newline character.)
    //what is a string?
    string s = "HI!";
    printf("%s\n", s); //this prints the string stored in "s" to the console. The format specifier %s is used to indicate that "s" should be printed as a string. The output will be "HI!" followed by a newline character.




    return 0; //returns 0 to indicate that the program ended successfully
}
int average(int n, int scores[]) { //this is a function declaration for a function called "average" that takes two parameters: an integer "n" representing the number of scores and an array of integers "scores" containing the scores. The function returns a float representing the average of the scores. The function body is defined within the curly braces {} and contains the code that will be executed when the function is called. In this case, it calculates the sum of the scores and then divides it by "n" to get the average, which is returned as a float.
    int sum = 0; //this declares an integer variable called "sum" and initializes it with the value 0. This variable will be used to accumulate the sum of all the scores in the "scores" array.
    for (int i = 0; i < n; i++) { //this is a for loop that will execute "n" times, where "i" is the loop variable that starts at 0 and increments by 1 until it reaches "n". Inside the loop, it adds the score at index "i" in the "scores" array to the "sum" variable. This allows us to calculate the total sum of all the scores in the array based on the number of scores passed as a parameter to the function.
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