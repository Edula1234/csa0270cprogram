#include <stdio.h>
int main(){
    int m,n;
    
    printf("enter the value of m:");
    scanf("%d", &m);
    
    printf("enter the value of n:");
    scanf("%d", &n);
    
    for(int i=m; i<=n; i++){
        if(i % 2 == 0){
            printf("even number between %d and %d", m,n);
            printf("%d \n",i);
        }
    }
    for(int i=m; i<=n; i++){
        if(i % 2 != 0){
            printf(" odd number between %d and %d", m,n);
            printf("%d \n",i);
        }
    }
    return 0;
    
}
