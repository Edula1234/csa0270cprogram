#include <stdio.h>

int findcube(int num) {
    return num * num * num;
}
int main() {
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    int cube = findcube(num);
    printf("cube of %d\n",num,cube);
    
    return 0;
}
