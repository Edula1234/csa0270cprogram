#include <stdio.h>

int main() {
    FILE *fp;
    int data;

    
    fp = fopen("data.bin", "rb");

    
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    while (fread(&data, sizeof(int), 1, fp) == 1) {
        printf("%d ", data);
    }

    
    fclose(fp);

    return 0;
}
