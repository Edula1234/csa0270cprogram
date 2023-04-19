#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *input_file, *error_file;
    char input_filename[] = "input.txt";
    char error_filename[] = "error_log.txt";
    char line[MAX_LINE_LENGTH];

    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Error opening input file!\n");
        exit(1);
    }

   
    error_file = fopen(error_filename, "w");
    if (error_file == NULL) {
        printf("Error opening error file!\n");
        exit(1);
    }

    
    while (fgets(line, MAX_LINE_LENGTH, input_file)) {
        
        if (strstr(line, "error") != NULL) {
            
            fputs(line, error_file);
        }
    }

    fclose(input_file);
    fclose(error_file);

    error_file = fopen(error_filename, "r");
    if (error_file == NULL) {
        printf("Error opening error file!\n");
        exit(1);
    }

    printf("Contents of %s:\n", error_filename);
    while (fgets(line, MAX_LINE_LENGTH, error_file)) {
        printf("%s", line);
    }

    fclose(error_file);

    return 0;
}
