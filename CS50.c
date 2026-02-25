#include <stdio.h> //standard input/output library, which provides functions for reading and writing data to the console and files
#include <cs50.h> //CS50 library, which provides additional functions for working with strings, files, and other data types
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
    if (x < y) {
        printf("x is less than y\n");
    }
    else if (x > y) {
        printf("x is greater than y\n");
    }
    else {
        printf("x is equal to y\n");
    }
    //here's a bad example of an if statement:
    if (x < y) {
        printf("x is less than y\n");
    }
    if (x > y) {
        printf("x is greater than y\n");
    }
    if (x == y) {
        printf("x is equal to y\n");
    }
    //this is bad because it will check all three conditions even if the first one is true, which is inefficient. The correct way to write this would be to use else if statements, as shown in the previous example, which will only check the next condition if the previous one is false.



    return 0; //returns 0 to indicate that the program ended successfully
}