#include <stdio.h>
int main(){
    int r,c, a[10][10], b[10][10], sum[10][10], i,j;
    
    printf("enter the number of rows:");
    scanf("%d", &r);
    
    printf("enter the value of columns:");
    scanf("%d", &c);
    
    printf("enter the elements of first matrix: \n");
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            printf("enter element a%d%d:", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the elements of second matrix: \n");
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            printf("enter elements b%d%d:", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("sum of two matrices :\n");
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            scanf("%d", &sum[i][j]);
            if(j==c-1){
        }
    }
    printf("\n\n");
    }
    return 0;
}
