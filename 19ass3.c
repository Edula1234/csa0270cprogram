#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000

int main() {
    FILE *fp_in, *fp_out;
    char line[MAX_LEN];
    char *ptr;

    fp_in = fopen("input.txt", "r");
    if (fp_in == NULL) {
        printf("Unable to open input file.\n");
        exit(1);
    }

    fp_out = fopen("output.txt", "w");
    if (fp_out == NULL) {
        printf("Unable to open output file.\n");
        exit(1);
    }

    while (fgets(line, MAX_LEN, fp_in) != NULL) {
        ptr = strstr(line, "red");
        while (ptr != NULL) {
            strncpy(ptr, "blue", 4);
            ptr = strstr(ptr+4, "red");
        }
        fputs(line, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    printf("Done!\n");

    return 0;
}
