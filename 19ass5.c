#include <stdio.h>

int main() {
    FILE *input_file, *output_file;
    int letter_counts[26] = {0};
    char c;

    input_file = fopen("data.txt", "r");
    if (input_file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((c = fgetc(input_file)) != EOF) {
        if (c >= 'a' && c <= 'z') {
            letter_counts[c - 'a']++;
        } else if (c >= 'A' && c <= 'Z') {
            letter_counts[c - 'A']++;
        }
    }

    fclose(input_file);

    output_file = fopen("statistics.txt", "w");
    if (output_file == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(output_file, "Letter\tCount\n");
    for (int i = 0; i < 26; i++) {
        fprintf(output_file, "%c\t%d\n", 'a' + i, letter_counts[i]);
    }

    fclose(output_file);

    printf("Letter count statistics have been written to statistics.txt.\n");

    return 0;
}
