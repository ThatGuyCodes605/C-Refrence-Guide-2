#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* fh_output;
    fh_output = fopen("output.txt", "w"); //available modes: r (read), w (write), a (append), r+, w+, a+
    if (fh_output == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    else {
        printf("File opened\n");
    }
    fputs("A string\n", fh_output);
    fprintf(fh_output, "data: %d\n", 5); // the difference between fputs and fprintf is that fputs only writes a string to the file, while fprintf can write formatted data to the file. In this example, fputs is used to write a simple string, while fprintf is used to write a formatted string that includes an integer value.
    for (int i = 0; i < 5; i++) {
        fprintf(fh_output, "data: %d\n", i);
    }
    while (1) {
        char input[100];
        printf("Enter a string (or 'exit' to quit): ");
        fgets(input, sizeof(input), stdin);
        if (strcmp(input, "exit\n") == 0) {
            break;
        }
        fputs(input, fh_output);
    }
    fclose(fh_output);
    FILE *fh_input;
    fh_input = fopen("output.txt", "r");
    if (fh_input == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    else {
        printf("File opened\n");
    }
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), fh_input) != NULL) {
        printf("%s", buffer);
    }
    fscanf(fh_input, "%s", buffer); // fscanf is used to read formatted data from the file. In this example, it reads a string from the file and stores it in the buffer variable. The format specifier %s tells fscanf to read a string until it encounters whitespace.
    int finput = 0;
    int numbers[100];
    int lines = 0;
    while (fscanf(fh_input, "%d", &finput) != EOF) { // the difference between fgets and fscanf is that fgets reads a line of text from the file and stores it in a buffer, while fscanf reads formatted data from the file and stores it in variables. In this example, fgets is used to read lines of text, while fscanf is used to read integer values from the file. The loop continues until the end of the file (EOF) is reached.
        numbers[lines] = finput;
        printf("file line %d: %d\n", lines+1, finput);
        lines++;
    }
    int total = 0;
    for (int i = 0; i < lines; i++) {
        total += numbers[i];
    }
    printf("Total: %d\n", total);
    printf("Average: %f\n", (float)total/lines);
    fgets(buffer, sizeof(buffer), fh_input);
    fclose(fh_input);
    return 0;
}
