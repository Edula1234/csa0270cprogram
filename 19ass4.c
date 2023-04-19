#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    char filename[100], search_string[100];
    FILE *fp;
    char line[MAX_LINE_LENGTH];

    printf("Enter the name of the file to read: ");
    scanf("%s", filename);
    printf("Enter the search string: ");
    scanf("%s", search_string);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Unable to open file '%s'\n", filename);
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, fp)) {
        if (strstr(line, search_string) != NULL) {
            printf("%s", line);
        }
    }

    fclose(fp);
    return 0;
}
