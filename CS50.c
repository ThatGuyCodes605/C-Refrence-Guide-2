#include <stdio.h> //standard input/output library, which provides functions for reading and writing data to the console and files
#include <cs50.h> //CS50 library, which provides additional functions for working with strings, files, and other data types
int get_n(void); //function prototype for the function "get_n", which will be defined later in the code. This allows us to call the function "get_n" from the main function before its actual definition, which can improve code organization and readability.
void meow(int n) {
    //this is a function declaration for a function called "meow" that takes no parameters and returns void (no value). The function body is defined within the curly braces {} and contains the code that will be executed when the function is called. In this case, it simply prints "Meow!" to the console.
    for (int i = 0; i < n; i++) { //this is a for loop that will execute the block of code inside the curly braces {} a specific number of times. In this case, it will initialize "i" to 0, check if "i < n" is true, and if so, it will execute the block of code and then increment "i" by 1. This process will repeat until "i" is no longer less than "n".
         printf("Meow!\n"); //this prints "Meow!" to the console followed by a newline character, and it will be printed "n" times because of the for loop.
    }
} //it is better do use a function prototype then whatever this is for example, you can declare the function prototype at the top of the file like this: void meow(void); and then define the function body later in the file. This way, you can call the function "meow" from anywhere in the file without having to worry about the order of the function definitions.
void hello(void);
int main(void) {
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
    return 0; //returns 0 to indicate that the program ended successfully
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