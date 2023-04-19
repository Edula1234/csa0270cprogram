#include <stdio.h>
#include <math.h>

int main() {
    float x, n, result;
    int choice;
    
    printf("Enter the value of x: ");
    scanf(" %f", &x);
    
    printf("Enter the value of n: ");
    scanf(" %f", &n);
    
    printf("choose an operation: \n");
    printf("1. power\n");
    printf("2. addition\n");
    printf("3. substrsction\n");
    printf("4. multiplication\n");
    printf("5. division\n");
    
    printf("Enter your choice (1-5):");
    scanf("%d", &choice);
    
    switch (choice){
        case 1:
            result = pow(x,n);
            printf("power(%f,%f)=%f", x, n, result);
            break;
        case 2:
             result = x+n;
             printf("add(%f,%f)=%f", x, n, result);
             break;
        case 3:
             result = x-n;
             printf("sub(%f,%f)=%f", x, n, result);
             break;
        case 4:
             result = x*n;
             printf("mul(%f,%f)=%f", x, n, result);
             break;
        case 5:
             if(n!=0){
                 result = x/n;
                 printf("div(%f,%f)=%f", x, n, result);
             } else {
                 printf("cannot divided by zero");
             }
             break;
             
             default:
                    printf("invalid choice");
                    break;
    }
                    
    return 0;}
     
