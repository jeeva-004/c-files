#include <stdio.h>
int main(){
    int n;                // This is a Declaration Part
    printf("enter a number: ");
    scanf("%d", &n);      // This is a user input part
    if (n%2==0){
        printf("%d is a Even number", n);
    }
    else{
        printf("%d is Odd number", n);
    }
    return 0;
}