#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>
int main(void) {
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
}
